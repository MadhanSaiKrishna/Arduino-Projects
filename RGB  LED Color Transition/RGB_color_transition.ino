int redPin =7;
int greenPin = 8;
int bluePin = 9;

int fadeValue = 5;

//Assuming RGB LED is common cathode

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  for(int i=0;i<256;i+=fadeValue)
  {
    analogWrite(redPin, i);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    delay(10);
    
  }
  delay(1000);
  for(int i =255;i>=0;i-=fadeValue)
  {
    analogWrite(redPin, i);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    delay(10);
  }
  for(int i=0;i<256;i+=fadeValue)
  {
    analogWrite(redPin,0);
    analogWrite(greenPin, i);
    analogWrite(bluePin,0);
    delay(10);
    
  }
  delay(1000);
  for(int i =255;i>=0;i-=fadeValue)
  {
    analogWrite(redPin,0);
    analogWrite(greenPin, i);
    analogWrite(bluePin,0);
    delay(10);
  }
  for(int i=0;i<256;i+=fadeValue)
  {
    analogWrite(redPin,0);
    analogWrite(bluePin, i);
    analogWrite(greenPin,0);
    delay(10);
    
  }
  delay(1000);
  for(int i =255;i>=0;i-=fadeValue)
  {
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
    analogWrite(bluePin, i);

    delay(10);
  }
  delay(500);
}