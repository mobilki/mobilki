package com.example.vivek.x3;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

import butterknife.Bind;
import butterknife.ButterKnife;

public class MainActivity extends AppCompatActivity {
    @Bind(R.id.textView) TextView t1;
    @Bind(R.id.editText) TextView e1;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }


    public void onButtonClick(View v){

        ButterKnife.bind(this);
        ButterKnife.bind(this);

        int num1 = Integer.parseInt(e1.getText().toString());
        String napis="";
        if (num1 > 0)
            {
                for (int i = 0; i < num1; i++)
                napis = napis + "Hi! ";
            }
        else
            {
                napis="Podaj liczbę większą od 0";
            }
        t1.setText(napis);

    }

}
