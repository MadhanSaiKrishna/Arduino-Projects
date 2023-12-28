int ldrPin = A0;
int buzzerPin = 7;

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  
  int ldrValue = analogRead(ldrPin);
  delay(10);

  if (ldrValue<100) {
    tone(buzzerPin, 1000);
    delay(1000); 
    noTone(buzzerPin);
  }
}
