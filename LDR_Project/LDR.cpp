#include <Servo.h>
int lt= A3;
int lr= A0;
int ll= A2;
int lb= A1;

Servo sh; 
Servo sv; 

int hor_pos = 90; 
int ver_pos = 90; 

void setup() {
  sh.attach(9);
  sv.attach(10);

  sh.write(hor_pos);
  sv.write(ver_pos);
  delay(500);
}

void loop() {
  int top = analogRead(lt);
  int right = analogRead(lr);
  int left = analogRead(ll);
  int bottom = analogRead(lb);

  if (right>left) {
    hor_pos++; 
  } 
  else if (left>right) {
    hor_pos--; 
  }
  else{
    hor_pos=90;
  }
  
  sh.write(hor_pos);

  if (top>bottom) {
    ver_pos++; 
  } 
  else if (bottom>top) {
    ver_pos--; 
  }
  else{
    ver_pos=90;
  }
  sv.write(ver_pos);

  delay(15); 
}