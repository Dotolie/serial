/*
 * avrdude - A Downloader/Uploader for AVR device programmers
 * Copyright (C) 2021 Marius Greuel
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

#ifdef _MSC_VER
#include "msvc/msvc_compat.h"
#endif

#define VERSION "7.3"

/* Options */

/* Linux sysfs GPIO support enabled */
/* #undef HAVE_LINUXGPIO */

/* Let linuxgpio know if libgpiod is available. */
/* #undef HAVE_LIBGPIOD */

/* Linux SPI support enabled */
/* #undef HAVE_LINUXSPI */

/* Parallel port access enabled */
/* #undef HAVE_PARPORT */

/* ----- Functions ----- */

/* Define if lex/flex has yylex_destroy */
#define HAVE_YYLEX_DESTROY 1

/* Define if ftdi1 has 'ftdi_tcioflush' function. */
/* #undef HAVE_FTDI_TCIOFLUSH */

/* ----- Libraries and Headers ----- */

/* Define to 1 if the system has the type `uint_t'. */
/* #undef HAVE_UINT_T */

/* Define to 1 if the system has the type `ulong_t'. */
/* #undef HAVE_ULONG_T */

/* Define if ELF support is enabled via libelf */
/* #undef HAVE_LIBELF */

/* Define to 1 if you have the <libelf.h> header file. */
/* #undef HAVE_LIBELF_H */

/* Define to 1 if you have the <libelf/libelf.h> header file. */
/* #undef HAVE_LIBELF_LIBELF_H */

/* Define if USB support is enabled via libusb */
//#define HAVE_LIBUSB 1

/* Define if USB support is enabled via a libusb-1.0 compatible libusb */
#define HAVE_LIBUSB_1_0 1

/* Define if USB support is enabled via a libusb-win32 compatible libusb */
/* #undef HAVE_LIBUSB_WIN32 */

/* Define to 1 if you have the <usb.h> header file. */
//#define HAVE_USB_H 1

/* Define to 1 if you have the <lusb0_usb.h> header file. */
/* #undef HAVE_LUSB0_USB_H */

/* Define to 1 if you have the <libusb.h> header file. */
/* #undef HAVE_LIBUSB_H */

/* Define to 1 if you have the <libusb-1.0/libusb.h> header file. */
#define HAVE_LIBUSB_1_0_LIBUSB_H 1

/* Define if HID support is enabled via libhidapi */
/* #undef HAVE_LIBHIDAPI */

/* Define to 1 if you have the <hidapi/hidapi.h> header file. */
/* #undef HAVE_HIDAPI_HIDAPI_H */

/* Define if FTDI support is enabled via libftdi */
/* #undef HAVE_LIBFTDI */

/* Define if FTDI support is enabled via libftdi1 */
#define HAVE_LIBFTDI1 1

/* Define if libftdi supports FT232H, libftdi version >= 0.20 */
#define HAVE_LIBFTDI_TYPE_232H 1

/* Define to 1 if you have the `readline' library (-lreadline). */
/* #undef HAVE_LIBREADLINE */

/* Define to 1 if you have the `serialport' library */
/* #undef HAVE_LIBSERIALPORT */
