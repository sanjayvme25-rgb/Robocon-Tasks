const int trig=9;
const int echo=10;
int distance;
long duration;
int lr=6;
int lg=7;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
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
  delay(500);
  if (distance>10){
    digitalWrite(lg,HIGH);
    digitalWrite(lr,LOW);
  }
  
  else if (distance<10){
    digitalWrite(lg,LOW);
    digitalWrite(lr,HIGH);
  }
}