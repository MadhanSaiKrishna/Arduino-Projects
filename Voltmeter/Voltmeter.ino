int readPin = A0;
float reading = 0;
int delayTime = 1000;
void setup()
{
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int val = analogRead(readPin);
  reading = (val * 5.0)/1023.0;
  Serial.print(reading, 3);
  Serial.println("V");
  delay(delayTime);
}