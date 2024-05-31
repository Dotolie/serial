package com.example.serial;

import androidx.annotation.NonNull;
import androidx.annotation.RequiresApi;
import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.usb.UsbDevice;
import android.hardware.usb.UsbDeviceConnection;
import android.hardware.usb.UsbManager;
import android.os.Build;
import android.os.Bundle;
import android.os.FileObserver;
import android.os.Handler;
import android.os.Message;
import android.text.Editable;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import com.example.serial.databinding.ActivityMainBinding;

import java.io.FileDescriptor;
import java.util.HashMap;
import java.util.Iterator;


public class MainActivity extends AppCompatActivity {

    private ActivityMainBinding binding;
    private static final String ACTION_USB_PERMISSION = "com.android.example.USB_PERMISSION";
    public static UsbDeviceConnection usbDeviceConnection;
    public static UsbManager mUsbManager;
    public static UsbDevice mDevice;
    public int fileDescriptor = 0;

    public Thread mThread;

    @SuppressLint("HandlerLeak")
    @RequiresApi(api = Build.VERSION_CODES.TIRAMISU)
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Example of a call to a native method
        TextView tv = binding.sampleText;
        tv.setText(stringFromJNI());

        Button bt =binding.button;
        EditText ed = binding.editText2;


        bt.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startThread();
//                Test();
            }
        });

        Button bt2 =binding.button2;
        bt2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                stopThread();
            }
        });


        PendingIntent mPermissionIntent = PendingIntent.getBroadcast(this, 0, new Intent(ACTION_USB_PERMISSION), PendingIntent.FLAG_MUTABLE);
        IntentFilter filter = new IntentFilter(ACTION_USB_PERMISSION);
        filter.addAction(UsbManager.ACTION_USB_DEVICE_ATTACHED);
        filter.addAction(UsbManager.ACTION_USB_DEVICE_DETACHED);
        registerReceiver(mUsbReceiver, filter);


        Toast.makeText(MainActivity.this, "start", Toast.LENGTH_SHORT).show();

        try {
            mUsbManager = (UsbManager) getSystemService(Context.USB_SERVICE);
            HashMap<String, UsbDevice> deviceList = mUsbManager.getDeviceList();

            Toast.makeText(MainActivity.this, "usbmanager", Toast.LENGTH_SHORT).show();

            for (UsbDevice device : deviceList.values()) {
                //your code
                ed.append("dn="+device.getDeviceName()+"\n");
                ed.append("pi="+device.getProductId()+"\n");
                ed.append("vi="+device.getVendorId()+"\n");

                if(mUsbManager.hasPermission(device)) {
                    Log.d("myapp3", "id=" + device.getVendorId());
                    usbDeviceConnection = mUsbManager.openDevice(device);
                    fileDescriptor = usbDeviceConnection.getFileDescriptor();

                    ed.append("onCreate: hasperm :fd="+fileDescriptor + " vid="+device.getVendorId()+"\n");

                    String aa = openJNI(fileDescriptor);
                    ed.append(aa);
                }
                else {
                    ed.append("onCreate: no perm & req: vid="+device.getVendorId()+"\n");
                    Log.d("myapp4", "per");

                    mUsbManager.requestPermission(device, mPermissionIntent);
                }
            }
        }
        catch (Exception e) {
            ed.append( "onCreate: except =" + e.toString());
        }
    }

    @Override
    protected void onDestroy() {
        closeJNI();

        usbDeviceConnection.close();
        unregisterReceiver(mUsbReceiver);

        EditText ed = binding.editText2;
        ed.setText("");
        Log.d("----serial", "unregiser reciver");

        super.onDestroy();
    }

    private final BroadcastReceiver mUsbReceiver = new BroadcastReceiver() {

        public void onReceive(Context context, Intent intent) {
            EditText ed = binding.editText2;
            String action = intent.getAction();

            ed.append("act="+action.toString() +"\n");
//            Log.d("----brdcast", "action="+ action);

            if ( UsbManager.ACTION_USB_DEVICE_ATTACHED.equals(action) ) {
                UsbDevice device = (UsbDevice)intent.getParcelableExtra(UsbManager.EXTRA_DEVICE);
                if( device != null ) {
                    ed.append("broad:act:att:dev="+device.getProductName() +"\n");
                }
            }

            if ( UsbManager.ACTION_USB_DEVICE_DETACHED.equals(action) ) {
                UsbDevice device = (UsbDevice)intent.getParcelableExtra(UsbManager.EXTRA_DEVICE);
                if( device != null ) {
                    ed.append("broad:act:det:dev="+device.getProductName() +"\n");
                }
            }

            if (ACTION_USB_PERMISSION.equals(action)) {
                ed.append("broad:act:permission\n");
                synchronized (this) {
                    UsbDevice device = (UsbDevice)intent.getParcelableExtra(UsbManager.EXTRA_DEVICE);

                    if (intent.getBooleanExtra(UsbManager.EXTRA_PERMISSION_GRANTED, false)) {
                        if(device != null){
                            //call method to set up device communication
                            ed.append("broad:act:perm-grant:dev="+device.getDeviceName() +"\n");
//                            Log.d( "myapp2", "permission granted " + device);
                            usbDeviceConnection = mUsbManager.openDevice(device);
                            fileDescriptor = usbDeviceConnection.getFileDescriptor();

                            ed.append("broad:fd="+fileDescriptor + " vid="+device.getVendorId()+"\n");

                            String aa = openJNI(fileDescriptor);
                            ed.append(aa);
                        }
                    }
                    else {
                        ed.append("broad:act:perm-not:dev=\n");
//                        Log.d( "myapp1", "permission denied for device " + device +"\n");
                    }
                }
            }
        }
    };

    public void callback(String v) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                EditText ed = binding.editText2;
                ed.append(v);
            }
        });
    }

    public void startThread() {
        if ( mThread == null ) {
            mThread = new Thread("my thread") {
                @Override
                public void run() {
                    while(true) {
                        readJNI();
                        try {
                            Thread.sleep(1000);
                        }
                        catch (InterruptedException e) {
                            e.printStackTrace();
                            break;
                        }
                    }
                }
            };
        };
        mThread.start();
    }

    public void stopThread() {
        if( mThread != null ) {
            mThread.interrupt();
            mThread = null;

            EditText ed = binding.editText2;
            ed.append("stopThread\n");
        }
    }
    /**
     * A native method that is implemented by the 'serial' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
    public native String openJNI(int fd);
    public native void readJNI();
    public native void closeJNI();

    // Used to load the 'serial' library on application startup.
    static {
        System.loadLibrary("serial");
    }
}