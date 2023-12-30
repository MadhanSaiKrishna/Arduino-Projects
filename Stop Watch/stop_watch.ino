#include <LiquidCrystal.h>

#define startButton 6
#define stopButton 7
#define resetButton 8

double tmp=0.0;
double val = 0.0;
double time;

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
  if(start == LOW)
  {
    while(true)
    {
      int stop = digitalRead(stopButton);
      if(stop == LOW)
      {
        tmp = time;
        lcd.clear();
        lcd.print(tmp);
        break;
      }
      int reset = digitalRead(resetButton);
      if(reset==LOW)
      {
   		 lcd.clear();
    	 time = 0.0;
    	 lcd.print(time);
  	  }
      lcd.clear();
      lcd.print(time);
      time+= 0.10;
      delay(100);
    }
    
  }
  
  int reset = digitalRead(resetButton);
  delay(50);
  if(reset==LOW)
  {
    lcd.clear();
    time = 0.0;
    lcd.print(time);
  }
}
