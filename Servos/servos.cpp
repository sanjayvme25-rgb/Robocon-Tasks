#include<Servo.h>
Servo s1;
Servo s2;
int pos= 0;
int pot= A0;
float myMap(float x, float in_min, float in_max, float out_min, float out_max){
  return (x/(in_min-in_max))*(out_min-out_max);
}
void setup() 
{
  s1.attach(3);
  s2.attach(5);
  pinMode(pot, INPUT);
}

void loop()
{
  float x= analogRead(pot);
  float pot_val= myMap(x, 0.0,1023.0,0.0,180.0);
  s1.write(pot_val);
  s2.write(180-pot_val);
}