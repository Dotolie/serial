/*
 * avrdude - A Downloader/Uploader for AVR device programmers
 * Copyright (C) 2011 Brett Hagman
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/* $Id$ */

/*
 * avrdude interface for Wiring bootloaders
 *
 * http://wiring.org.co/
 *
 * The Wiring bootloader uses a near-complete STK500v2 protocol.
 * (Only ISP specific programming commands are not implemented
 * e.g. chip erase).
 * DTR and RTS signals are diddled to set the board into programming mode.
 *
 * Also includes an extended parameter to introduce a delay after opening to
 * accommodate multi-layered programmers/bootloaders. If the extended
 * parameter 'snooze' > 0, then no DTR/RTS toggle takes place, and AVRDUDE
 * will wait that amount of time in milliseconds before syncing. If the
 * extended parameter 'delay' is set then this number of milliseconds is
 * added to the usual delay of 80 ms after toggling DTR/RTS.
 *
 */

#include "ac_cfg.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include <libusb.h>

#include <libusbserial.h>
#include "internal.h"
#include "driver.h"

#include "avrdude.h"
#include "libavrdude.h"

#include "stk500v2_private.h"
#include "stk500v2.h"
#include "ywmode.h"


static libusb_context *ctx = NULL;
static struct libusb_device_handle *devh = NULL;
static struct usbserial_port *pp[2] = {0,};
static struct usbserial_config config = {
	.baud = 115200,
	.data_bits = USBSERIAL_DATABITS_8,
	.stop_bits = USBSERIAL_STOPBITS_1,
	.parity = USBSERIAL_PARITY_NONE,
};
static char gdata[256] = {0,};
static int glen = 0;
static int gidx = 0;
static char cFlag = 0;

void freadcb(void *data, size_t size, void *user_data)
{
	glen = size;
	gidx = 0;
	memcpy(gdata, data, glen);
	
	cFlag = 1;	
//	for(size_t i=0;i<glen;i++)
//		printf("s=%ld, i=%ld, [0x%02x] \n", size, i, gdata[i]);
//	printf("----\n");
//	printf("s=%d, %s", size, a);

}

void ferrcb(enum libusb_transfer_status status, void *user_data)
{
	printf("status=%d\n", status);
}



static int usbdev_open_ywmode(const char *port, union pinfo pinfo, union filedescriptor *fd) 
{
//	const char *pName2 = NULL;

	usbserial_cb_read_fn readcb = freadcb;
	usbserial_cb_error_fn errcb = ferrcb;

  	libusb_init(NULL);
  	devh = libusb_open_device_with_vid_pid(ctx, pinfo.usbinfo.vid, pinfo.usbinfo.pid);	
	if (devh == 0) {
		return -1;
		}
	
  	usbserial_port_init( pp, devh, 0, readcb, errcb, 0);
//	pName2 = usbserial_get_device_name2( pp[0] );

	

	usbserial_port_set_config(pp[0], &config);
	usbserial_purge(pp[0], 1, 1);	
	usbserial_start_reader(pp[0]);

	fd->usb.rep = 0x81;
	fd->usb.rep = 0x02;
	fd->usb.max_xfer = 64;
	fd->usb.handle = pp[0];


	return 0;
}

static void usbdev_close_ywmode(union filedescriptor *fd)
{
	struct usbserial_port *m = (struct usbserial_port*)(fd->usb.handle);

	usbserial_stop_reader(m);
	usbserial_port_deinit(m);

}


static int usbdev_send_ywmode(const union filedescriptor *fd, const unsigned char *bp, size_t mlen)
{
	struct usbserial_port *m = (struct usbserial_port*)(fd->usb.handle);
	const struct usbserial_driver *pDriver = m->driver;

  	if(verbose > 3)
    	trace_buffer(__func__, bp, mlen);
  
	pDriver->write(m, bp, mlen);
	
//	printf("r=%d, m=%p, s=%d\n", r, fd->usb.handle, mlen);

	return 0;
}

static int usbdev_recv_frame_ywmode(const union filedescriptor *fd, unsigned char *buf, size_t nbytes)
{

//	printf("glen=%d, nbyte=%d, gidx=%x, gdata=0x%02x\n", glen, nbytes, gidx, (unsigned char)gdata[gidx]);

	if( glen >= (int)nbytes ) {
		*buf = gdata[gidx];
		gidx++;
		glen--;
		if(verbose > 3)
		    trace_buffer(__func__, buf, 1);		
		}
	else {
		while(!cFlag) {
			libusb_handle_events_completed(ctx, NULL);
			usleep(10000);
			}
		if( glen > (int)nbytes ) {
			*buf = gdata[gidx];
			gidx++;
			glen--;		
			if(verbose > 3)
				trace_buffer(__func__, buf, 1);			
			}
		}
	cFlag = 0; 

	return 0;
}

static int usbdev_drain_ywmode(const union filedescriptor *fd, int display)
{
//	int r = 0;
	char data[64];
	
	struct usbserial_port *m = (struct usbserial_port*)(fd->usb.handle);
	const struct usbserial_driver *pDriver = m->driver;


//	usbserial_io_bulk_read(m, (void*)data, 64, 1000);
	pDriver->read(m, (void*)data, 64, 1000000); 
//	printf("drain:r=%d, %s\n", r, data);

	
	return 0;
}

static int usbdev_set_dtr_rts_ywmode(const union filedescriptor *fd, int is_on)
{
	int r = 0;
	struct usbserial_port *m = (struct usbserial_port*)(fd->usb.handle);


//	printf("set: m=%p, hd=%p, is=%d\n", m, fd->usb.handle, is_on);
	
	r = usbserial_set_dtr_rts(m, is_on, is_on);

	return r;
}


struct serial_device usb_serdev_ywmode =
{
  .open = usbdev_open_ywmode,
  .close = usbdev_close_ywmode,
  .send = usbdev_send_ywmode,
  .recv = usbdev_recv_frame_ywmode,
  .drain = usbdev_drain_ywmode,
  .set_dtr_rts = usbdev_set_dtr_rts_ywmode,
};



/*
 * Private data for this programmer.
 */
struct ywmodepdata {
  int snoozetime, delay;
};


/* wiringpdata is our private data */
/* pdata is stk500v2's private data (inherited) */

#define YWMODEPDATA(pgm) ((struct ywmodepdata *)(((struct pdata *)(pgm->cookie)) -> chained_pdata))

static void ywmode_setup(PROGRAMMER *pgm) {
  // First, have STK500v2 backend allocate its own private data
  stk500v2_setup(pgm);
printf("ywmode-setup\n");
  // Then prepare our data and store in a safe place for the time being
  ((struct pdata *)(pgm->cookie))->chained_pdata = cfg_malloc(__func__, sizeof(struct ywmodepdata));
}

static void ywmode_teardown(PROGRAMMER *pgm) {
  free(((struct pdata *)(pgm->cookie))->chained_pdata);
  stk500v2_teardown(pgm);
printf("ywmode-teardown\n");
}

static int ywmode_parseextparms(const PROGRAMMER *pgm, const LISTID extparms) {
  LNODEID ln;
  const char *extended_param, *errstr;
  int rv = 0;
  printf("ywmode-parseext\n");

  for (ln = lfirst(extparms); ln; ln = lnext(ln)) {
    extended_param = ldata(ln);

    if (str_starts(extended_param, "snooze=")) {
      int val = str_int(extended_param+7, STR_INT32, &errstr);
      if(errstr || val < 0) {
        pmsg_error("-x%s: %s\n", extended_param, errstr? errstr: "snooze time cannot be negative");
        rv = -1;
        continue;
      }
      pmsg_notice2("%s(): snooze time set to %d ms\n", __func__, val);
      YWMODEPDATA(pgm)->snoozetime = val;
      continue;
    } else if (str_starts(extended_param, "delay=")) {
      int val = str_int(extended_param+6, STR_INT32, &errstr);
      if(errstr) {
        pmsg_error("-x%s: %s\n", extended_param, errstr);
        return -1;
      }
      pmsg_notice2("%s(): delay set to %d ms\n", __func__, val);
      YWMODEPDATA(pgm)->delay = val;
      continue;
    } else if (str_eq(extended_param, "help")) {
      msg_error("%s -c %s extended options:\n", progname, pgmid);
      msg_error("  -xsnooze=<arg> Wait snooze [ms] before protocol sync after port open\n");
      msg_error("  -xdelay=<arg>  Add delay [ms] after reset, can be negative\n");
      msg_error("  -xhelp         Show this help menu and exit\n");
      exit(0);
    }

    pmsg_error("invalid extended parameter '%s'\n", extended_param);
    rv = -1;
  }

  return rv;
}

static int ywmode_open(PROGRAMMER *pgm, const char *port) {
	int r = 0;
	union pinfo pinfo;

	pmsg_debug("ywmode_open(\"%s\")\n", port);

	/* usb_init will be done in usbOpenDevice */
	LNODEID usbpid = lfirst(pgm->usbpid);
	int pid, vid;
	if (usbpid) {
	  pid = *(int *)(ldata(usbpid));
	  if (lnext(usbpid))
		pmsg_warning("using PID 0x%04x, ignoring remaining PIDs in list\n", pid);
	} else {
	  pid = 0x6001;
	}
	vid = pgm->usbvid? pgm->usbvid: 0x0403;


	strcpy(pgm->port, port);
	
	if (str_starts(port, "usb")) {
    	serdev = &usb_serdev_ywmode;
	    pinfo.usbinfo.vid = vid;
	    pinfo.usbinfo.flags = 0;
    	pinfo.usbinfo.pid = pid;
   	}

	
	r = serial_open(port, pinfo, &pgm->fd);
	if( r < 0 ) {
		pmsg_error("serial_open() failed\n");
		return -1;
		}


    pmsg_notice2("ywmode_open(): releasing DTR/RTS \n");
    serial_set_dtr_rts(&pgm->fd, 0);
    usleep(50*1000);

    // Pull the RTS/DTR line low to reset AVR
    pmsg_notice2("ywmode_open(): asserting DTR/RTS \n");
    serial_set_dtr_rts(&pgm->fd, 1);

    // Max 100 us: charging a cap longer creates a high reset spike above Vcc
    usleep(100);
    // Set the RTS/DTR line back to high, so direct connection to reset works
    serial_set_dtr_rts(&pgm->fd, 0);
    usleep(100);


	// Drain any extraneous input
  	stk500v2_drain(pgm, 1);
	
  	usleep(250000);	
	if (stk500v2_getsync(pgm) < 0) {
	  pmsg_error("stk500v2_getsync() failed; try -xdelay=n with some n in [-80, 100]\n");
	  return -1;
	}

	return 0; 
}

static void ywmode_close(PROGRAMMER * pgm)
{

  	serial_close(&pgm->fd);
  

  	libusb_release_interface(devh, 0);
	libusb_close(devh);
	libusb_exit(NULL);
	
}

const char ywmode_desc[] = "STK500v2 protocol, with the bootloader.";

void ywmode_initpgm(PROGRAMMER *pgm) {
  /* The Wiring bootloader uses a near-complete STK500v2 protocol. */

  stk500v2_initpgm(pgm);

  strcpy(pgm->type, "Ywmode");
  pgm->open           = ywmode_open;
  pgm->close          = ywmode_close;

  pgm->setup          = ywmode_setup;
  pgm->teardown       = ywmode_teardown;
  pgm->parseextparams = ywmode_parseextparms;
}

