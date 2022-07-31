void setup() {
  pinMode(D8,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);    
}

void loop() {
  digitalWrite(D8,HIGH);
  delay(3500);
  digitalWrite(D8,LOW);
  delay(10);
  digitalWrite(D6,HIGH);
  delay(3000);
  digitalWrite(D6,LOW);
  delay(700);
  digitalWrite(D6,HIGH);
  delay(500);
  digitalWrite(D6,LOW);
  delay(500);
  digitalWrite(D6,HIGH);
  delay(500);
  digitalWrite(D6,LOW);
  delay(500);
  digitalWrite(D6,HIGH);
  delay(500);
  digitalWrite(D6,LOW);
  delay(500);
  digitalWrite(D7,HIGH);
  delay(3500);
  digitalWrite(D7,LOW);
  delay(10);
 
}
