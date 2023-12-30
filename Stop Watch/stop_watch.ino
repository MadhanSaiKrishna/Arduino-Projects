#include <LiquidCrystal.h>

#define startButton 6
#define stopButton 7
#define resetButton 8

double tmp=0.0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(startButton,INPUT_PULLUP);
  pinMode(stopButton,INPUT_PULLUP);
  pinMode(resetButton,INPUT_PULLUP);
  lcd.begin(16, 2);
  lcd.print("Welcome!");
  lcd.setCursor(0,1);
  lcd.print("PRESS TO START");
}

void loop()
{
  int start = digitalRead(startButton);
  delay(50);
  int stop = digitalRead(stopButton);
  delay(50);
  int reset = digitalRead(resetButton);
  delay(50);
  if(start == LOW)
  {
    while(stop)
    {
      lcd.clear();
      double time = millis()/1000.0;
      lcd.print(time);
      delay(100);
    }
    
  }  
  if(stop == LOW)
  {
    lcd.print("STOP");
  }  
  if(reset==LOW)
  {
    lcd.clear();
  }
}