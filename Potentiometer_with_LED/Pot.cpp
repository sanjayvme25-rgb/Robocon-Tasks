int lr=6;
int ly=9;
int lg=10;
int sw=A0;
void setup() {
  pinMode(lr, OUTPUT);
  pinMode(lg, OUTPUT);
  pinMode(ly, OUTPUT);
  pinMode(sw, INPUT);
  Serial.begin(9600);
}

void loop() {
  float s= analogRead(sw);
  float inp= map(s,0.00,1023.00,0.00,255.00);
  if (s>0 && s<340){
    analogWrite(lr,inp);
    digitalWrite(ly,LOW);
    digitalWrite(lg,LOW);
    Serial.println("Red LED in ON\nPotentiometer value: ");
    Serial.println(s);
    delay(300);
  }
  else if (s>340 && s<680){
    analogWrite(ly,inp);
    digitalWrite(lr,LOW);
    digitalWrite(lg,LOW);
    Serial.println("Yellow LED in ON\nPotentiometer value: ");
    Serial.println(s);
    delay(300);
  }
  else if (s>680 && s<1023){
    analogWrite(lg,inp);
    digitalWrite(ly,LOW);
    digitalWrite(lr,LOW);
    Serial.println("Green LED in ON\nPotentiometer value: ");
    Serial.println(s);
    delay(300);
  }
}