#define lg 13
#define ly 12
#define lr 11
#define sw1 10
#define sw2 9

void setup() {
  pinMode(lg, OUTPUT);
  pinMode(ly, OUTPUT);
  pinMode(lr, OUTPUT);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
}

void loop(){
  bool s1= digitalRead(sw1);
  bool s2= digitalRead(sw2);
  digitalWrite(lg,s2 && s1);
  digitalWrite(ly,!s2);
  digitalWrite(lr,s2 && !s1);
}