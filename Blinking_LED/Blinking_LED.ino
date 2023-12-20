int led_pin = 7;
String msg = "How many times do you want the LED to blink : ";
int val = 0;
int waitT=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin,LOW);
  Serial.print(msg);
  while(Serial.available()==0){}
  val = Serial.parseInt();
  Serial.println(val);
  for(int i=0;i<val;i++)
  {
    digitalWrite(led_pin,HIGH);
    delay(waitT);
    digitalWrite(led_pin,LOW);
    delay(waitT);
  }
}
