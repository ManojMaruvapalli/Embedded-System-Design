void setup()
{
  // put your setup code here, to run once:
  for(int i = 2; i <=8; i++)
  {
    pinMode(i, OUTPUT);
  }
}



void Display(int disp)
{
  if(disp == 1 || disp == 4)
  {
    digitalWrite(2, HIGH);
  }

  if(disp == 2)
  {
    digitalWrite(4, HIGH);
  }

  if(disp == 5 || disp == 6)
  {
    digitalWrite(3, HIGH);
  }

  if(disp == 1 || disp == 4 || disp == 7)
  {
    digitalWrite(5, HIGH);
  }

  if(disp == 1 || disp == 3 || disp == 4 || disp ==5 || disp ==7 || disp ==9)
  {
    digitalWrite(6, HIGH);
  }

  if(disp == 1 || disp == 2 || disp ==3 || disp == 7)
  {
    digitalWrite(7, HIGH);
  }

  if(disp == 0 || disp == 1 || disp == 7)
  {
    digitalWrite(8, HIGH);
  }
}



void on() 
{
  // put your main code here, to run repeatedly:
  for(int i = 2; i <= 8; i++)
  {
    digitalWrite(i, LOW);
  }
}


void loop() 
{
  // put your main code here, to run repeatedly:
  while (1)
    {
        for (int i = 0; i < 9; i++)
        {
            Display(i);
            delay(1500);
            on();
        }
        
    }
}