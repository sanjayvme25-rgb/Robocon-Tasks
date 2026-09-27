int led=5;
const int trig=10;
const int echo=9;
long duration;
int distance;
float mapX(float x,float in_min,float in_max,float out_min,float out_max){
  return (x/(in_min-in_max))*(out_min-out_max);
}

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  duration= pulseIn(echo,HIGH);
  distance = duration*0.034/2;
  if (distance<20 || distance>200){
  	digitalWrite(led, LOW);
  }
  else{
    float n= mapX(distance,20,200,0,255);
    analogWrite(led, n);
  }
  
}