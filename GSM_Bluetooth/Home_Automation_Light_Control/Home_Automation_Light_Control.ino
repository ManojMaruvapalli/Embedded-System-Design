#include <SoftwareSerial.h>
SoftwareSerial SIM900A(10, 11);
#define RELAY1 7

int val = 0;
int flag = 0;
int rly = 0;
int len = 0;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (RELAY1, OUTPUT);
  SIM900A.begin(9600);
  SIM900A.println("AT+CNMI = 2, 2, 0, 0, 0");
  delay(100);
}

void on()
{
  digitalWrite(RELAY1, 0);
  Serial.println("Light On");
  rly = 1;
}

void off()
{
  digitalWrite(RELAY1, 1);
  Serial.println("Light Off");
  rly = 0;
}

String readSIM900A()
{
  String buffer;
  while(SIM900A.available())
  {
    char c = SIM900A.read();
    buffer.concat(c);
    delay(10);
  }
  return buffer;
}

void readsms()
{
  String buffer = readSIM900A();
  if(buffer.startsWith("\r\n+CMT: "))
  {
    Serial.println(buffer);
    Serial.println("*** RECEIVED AN SMS ***");
    len = buffer.length();
    Serial.println(buffer.substring(len - 5, len));
    if(buffer.indexOf("ON") > 0 || buffer.indexOf("on") > 0 
       || buffer.indexOf("oN") > 0 || buffer.indexOf("On") > 0)
    {
      on();
    }
    else if(buffer.indexOf("OFF") > 0 || buffer.indexOf("Off") > 0 
            || buffer.indexOf("oFF") > 0 || buffer.indexOf("off") > 0 
            || buffer.indexOf("oFf") > 0 || buffer.indexOf("ofF") > 0)
    {
      off();
    }
  }
  buffer.remove(0, len - 1);
  delay(100);
  return 0;
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(val == 0)
  {
    off();
    val = 1;
  }

  while(1)
  {
    readsms();
  }
}