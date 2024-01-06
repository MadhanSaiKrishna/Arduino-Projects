#define TRIG_PIN 7
#define ECHO_PIN 6

long timeInMicro=0;
double distanceInCm = 0;

void setup()
{
  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  timeInMicro = pulseIn(ECHO_PIN, HIGH);
  distanceInCm =  timeInMicro / 29.0 / 2.0 ;
  Serial.println(distanceInCm);
  delay(100);
  
}