// C++ code

int buzzerPin = 7;


void setup()
{
  pinMode(buzzerPin,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int val = analogRead(A0);
  digitalWrite(buzzerPin,LOW);
  if(val>800)
  {
    digitalWrite(buzzerPin,HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(buzzerPin,LOW);
  }
}
