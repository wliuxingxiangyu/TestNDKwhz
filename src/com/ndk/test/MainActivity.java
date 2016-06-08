package com.ndk.test;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;

public class MainActivity extends Activity {
	static {
		System.loadLibrary("TestNdk");
		}

		/** Called when the activity is first created. */
		@Override
		public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		// setContentView(R.layout.main);

		String str = JniClient.AddStr("prefix", "suffix");


		int iSum = JniClient.AddInt(5, 2); 
		String strSum = "5 + 2 = " + iSum;

		TextView tv1 = new TextView(this);
		tv1.setText(strSum);
//		tv1.setText(str);
		setContentView(tv1);
		}
}
