int ldrPin = A0;
int buzzerPin = 7;

#define THRESHOLD 550

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  // Serial.begin(9600);
}

void loop() {
  
  int ldrValue = analogRead(ldrPin);
  delay(10);
  // Serial.println(ldrValue);
  // delay(1000);

  if (ldrValue>THRESHOLD) {
    tone(buzzerPin, 1000);
    delay(1000); 
    noTone(buzzerPin);
  }
}
