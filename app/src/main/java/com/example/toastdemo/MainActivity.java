package com.example.toastdemo;

import android.app.Activity;
import android.os.Bundle;
import android.content.Context;

public class MainActivity extends Activity {
    static {
        System.loadLibrary("toastdemo");
    }

    private native void showChristmasToast(Context context);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        showChristmasToast(this);
    }
}
