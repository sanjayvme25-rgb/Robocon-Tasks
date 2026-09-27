#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2);
float pot= A0;
int in1=9;
int in2=10;
int en=11;
float mapX(float x, float in_min, float in_max, float out_min, float out_max){
  return (x/(in_min-in_max))*(out_min-out_max);
}
void setup()
{
  pinMode(pot, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(en1, OUTPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
}

void loop()
{
  float s= analogRead(pot);
  float pot_val= mapX(s, 0.0,1023.0,0.0,255.0);
  digitalWrite(in2, HIGH);
  digitalWrite(in1, LOW);
  analogWrite(en1,pot_val);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(en2,pot_val);
  lcd.print("Pot_Val: ", s);
  lcd.setCursor(0,1);
  lcd.print("PWM: ", pot_val);
}