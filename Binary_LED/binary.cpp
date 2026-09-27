#define led1 13
#define led2 12
#define led3 11
#define led4 10

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int input = Serial.parseInt();
  if (input<0 || input >15){
    Serial.println("Invalid");
  }
  else{
    if (input%2==1){
      digitalWrite(led4, HIGH);
    }
    if (int((input/2))%2==1){
      digitalWrite(led3, HIGH);
  	}
  	if (int((input/4))%2==1){
      digitalWrite(led2, HIGH);
  	}
  	if (int((input/8))%2==1){
      digitalWrite(led1, HIGH);
  	}
}
}