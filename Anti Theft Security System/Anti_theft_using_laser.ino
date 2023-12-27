int ldrPin = 8;
int buzzerPin = 7;

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  
  int ldrPinvalue = digitalRead(ldrPin);

  if (ldrPinvalue == HIGH) {
    tone(buzzerPin, 1000);
    delay(1000); 
    noTone(buzzerPin);
  }
}
