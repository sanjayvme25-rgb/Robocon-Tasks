int en1= 5;
int in3= 2;
int in4= 3;
int pot= A0;

float mapF(float x,float in_min, float in_max, float out_min, float out_max){
	return (x/(in_min-in_max))*(out_min-out_max);
}

void setup()
{
  pinMode(en1, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  float s= analogRead(pot);
  float inp= mapF(s,0.00,1023.00,0.00,255.00);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(en1,inp);
}