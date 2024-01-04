#include<SoftwareSerial.h>
SoftwareSerial mySerial(10, 11);
int analogPin = A0;
int touchValue = 0;
int myNum = 0000000000;

void setup() 
{
  // put your setup code here, to run once:
  mySerial.begin(9600);
  Serial.begin(9600);
  delay(100);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
}

void SendMessage()
{
  mySerial.println("AT+CMGF = 1");
  delay(1000);
  mySerial.println("AT+CMGF=\"myNum\"\r");
  delay(1000);
  mySerial.println("EMERGENCY ALERT!!!");
  delay(100);
  mySerial.println((char)26);
  delay(1000);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  touchValue = analogRead(analogPin);
  Serial.print(touchValue);
  Serial.print("\n");
  if(touchValue > 1000)
  {
    SendMessage();
    digitalWrite(2, LOW);
    delay(2000);
    digitalWrite(2, HIGH);
  }
}
