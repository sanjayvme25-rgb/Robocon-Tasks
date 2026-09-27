int en1= 10;
int en2= 9;
int in1= 11;
int in2= 6;
int in3= 3;
int in4= 1;
float pot= A0;

float mapX(float x, float in_min, float in_max, float out_min, float out_max){
  return (x/(in_min-in_max))*(out_min-out_max);
}

void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(pot, INPUT);
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
}