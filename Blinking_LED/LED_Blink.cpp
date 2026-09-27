#define led1 13
#define led2 12

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int input = Serial.parseInt();

  if (input == 1) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  } 
  else if (input == 2) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
}