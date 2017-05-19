#include<LiquidCrystal.h> //载入库

LiquidCrystal lcd(13,12,11,10,9,8);  //RS接13PIN，E接12PIN，D4-D7接11-8PIN

void setup(){
    lcd.begin(16 , 2);
    lcd.clear();
    }
void loop(){
    // 日文字符
    char ascii0=0x00+214;
    char ascii1=0x00+169;
    char ascii2=0x00+202;

    char ascii3=0x00+205;
    char ascii4=0x00+178;
    char ascii5=0x00+183;
    char ascii6=0x00+192;
    char ascii7=0x00+178;
    char ascii8=0x00+192;;

    lcd.setCursor(0, 0);    // 显示第一行
    lcd.print(ascii0);
    lcd.print(ascii1);
    lcd.print(ascii2);
    lcd.print("DXY");
    lcd.print(ascii3);
    lcd.print(ascii4);
    lcd.print(ascii5);
    lcd.print(ascii6);
    lcd.print(ascii7);
    lcd.print(ascii8);
    lcd.print("!");

    lcd.setCursor(0 , 1);// 第二行
    lcd.print("I want DXY");
    delay(1000);
    lcd.clear();
    }
