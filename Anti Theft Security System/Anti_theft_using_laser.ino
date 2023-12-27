// C++ code
//
void setup()
{
  pinMode(7,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int val = analogRead(A0);
  if(val>800)
  {
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }
}