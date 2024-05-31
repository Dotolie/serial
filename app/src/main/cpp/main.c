#include <jni.h>
#include <string.h>
#include <android/log.h>

#include <stdio.h>
#include <libusbserial.h>





#define LOG_TAG "serial-1"

#define ALOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define ALOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)


struct usbserial_config config = {
.baud = 115200,
.data_bits = USBSERIAL_DATABITS_8,
.stop_bits = USBSERIAL_STOPBITS_1,
.parity = USBSERIAL_PARITY_NONE,
};


static libusb_context *ctx = NULL;
static struct libusb_device_handle *devh = NULL;
static struct usbserial_port *pp[2];

static char value[256] = {0,};

static JavaVM *jvm;
static jobject *gobject;

void freadcb(void *data, size_t size, void *user_data) {
    JNIEnv *env;

    memset(value, 0, 256);
    memcpy(value, data, size);

    (*jvm)->GetEnv( jvm, (void**)&env, JNI_VERSION_1_6);
    jclass clazz = (*env)->GetObjectClass(env, gobject);
    jmethodID mid = (*env)->GetMethodID(env, clazz, "callback", "(Ljava/lang/String;)V");

    (*env)->CallVoidMethod(env, gobject, mid, (*env)->NewStringUTF(env, value));
}

void ferrcb(enum libusb_transfer_status status, void *user_data)
{
	ALOGD("status=%d\n", status);
}

JNIEXPORT jstring JNICALL
Java_com_example_serial_MainActivity_openJNI(
        JNIEnv* env,
        jobject thiz,
        int fd)
{
	int a = 0;
	const char *pName2 = NULL;
	unsigned int nCount = 0;
	char data[256];
	char www[8] = { 0x1b, 0x01, 0x00, 0x01, 0x0e, 0x01, 0x14, };

    gobject = (*env)->NewGlobalRef(env, thiz);

    jclass clazz = (*env)->GetObjectClass(env, gobject);
    jmethodID mid = (*env)->GetMethodID(env, clazz, "callback", "(Ljava/lang/String;)V");
    (*env)->CallVoidMethod(env, gobject, mid, (*env)->NewStringUTF(env, "serialJNI"));

	usbserial_cb_read_fn readcb = freadcb;
	usbserial_cb_error_fn errcb = ferrcb;

    libusb_set_option(NULL, LIBUSB_OPTION_NO_DEVICE_DISCOVERY, NULL);
//	a = usbserial_is_device_supported(0x0403, 0x6001, 0, 0 );
//	pName = usbserial_get_device_name(0x0403, 0x6001, 0, 0 );
//	nCount = usbserial_get_ports_count(0x0403, 0x6001, 0, 0 );

    libusb_init(NULL);
//	devh = libusb_open_device_with_vid_pid(ctx, 0x0403, 0x6001);
    a = libusb_wrap_sys_device(NULL, (intptr_t)fd, &devh);
    sprintf(value,"fd=%d,i=%d,",fd, a);


    a = libusb_kernel_driver_active(devh, 0);
    sprintf(data,"k=%x,",a);
    strcat(value, data);
    if (a > 0) {
        a = libusb_detach_kernel_driver(devh, 0);
        sprintf(data,"m=%x,",a);
        strcat(value, data);
    }


	a = usbserial_port_init( pp, devh, 0, readcb, errcb, 0);
    sprintf(data,"b=%d,",a);
    strcat(value, data);
    if( a < 0 )
        strcat( value, usbserial_get_error_str(a));

	pName2 = usbserial_get_device_name2( pp[0] );
    sprintf(data,"na=%s,",pName2);
    strcat(value, data);

	a = usbserial_port_set_config(pp[0], &config);
    sprintf(data,"c=%d,",a);
    strcat(value, data);

	a = usbserial_purge(pp[0], 1, 1);
    sprintf(data,"d=%d,",a);
    strcat(value, data);

	a = usbserial_start_reader(pp[0]);
    sprintf(data,"e=%d,",a);
    strcat(value, data);

	usbserial_set_dtr_rts(pp[0], 1, 1);
	usbserial_set_dtr_rts(pp[0], 0, 0);

    return (*env)->NewStringUTF(env, value);
}


JNIEXPORT void JNICALL
Java_com_example_serial_MainActivity_closeJNI(
        JNIEnv* env,
        jobject thiz)
{
    usbserial_stop_reader(pp[0]);
    usbserial_port_deinit(pp[0]);

    libusb_close(devh);
    libusb_exit(NULL);
}

JNIEXPORT void JNICALL
Java_com_example_serial_MainActivity_readJNI(JNIEnv *env, jobject thiz)
{
    libusb_handle_events_completed(ctx, NULL);
}


JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void* reserved) {
    jvm = vm;

    ALOGI("JNI_OnLoad");

    return JNI_VERSION_1_6;
}