int led1=5;
int led2=6;
int pot=A0;

float mapF(float x,float in_min, float in_max, float out_min, float out_max){
	return (x/in_max)*out_max;
}

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pot, INPUT);
}

void loop(){
  float pot_val= analogRead(pot);
  int x= mapF(pot_val,0.00,1023.00,0.00,255.00);
  analogWrite(led1, x);
  analogWrite(led2, 255-x);
}