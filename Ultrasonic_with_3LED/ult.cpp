const int trig=9;
const int echo=10;
int distance;
long duration;
int lr=6;
int ly=5;
int lg=7;
int pot= A0;

float mapF(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(pot, INPUT);
  pinMode(lr,OUTPUT);
  pinMode(ly,OUTPUT);
  pinMode(lg,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration= pulseIn(echo,HIGH);
  distance= duration*0.034/2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  float s= analogRead(pot);
  float warning= mapF(s,0.00,1023.00,0.00,340);
  Serial.println("Warning= ");
  Serial.println(warning);
  Serial.println("Distance= ");
  Serial.println(distance);
  delay(500);

  if (distance>warning){
    digitalWrite(lg,HIGH);
    digitalWrite(lr,LOW);
    digitalWrite(ly,LOW);
    Serial.println("Safe");
  }
  else if(distance> warning/2){
    digitalWrite(ly,HIGH);
    digitalWrite(lg,LOW);
    digitalWrite(lr,LOW);
    Serial.println("Close to obstacle");
  }
  else if(distance< warning/2){
    digitalWrite(lr,HIGH);
    digitalWrite(lg,LOW);
    digitalWrite(ly,LOW);
    Serial.println("Too close to obstacle!!!");
  }
}