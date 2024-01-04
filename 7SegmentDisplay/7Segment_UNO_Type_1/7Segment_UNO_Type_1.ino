void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void Display(int disp)
{
  switch (disp)
  {
    case 0 : digitalWrite(2, LOW);
             digitalWrite(3, LOW);
             digitalWrite(4, LOW);
             digitalWrite(5, LOW);
             digitalWrite(6, LOW);
             digitalWrite(7, LOW);
             digitalWrite(8, HIGH);
  
    case 1 : digitalWrite(2, HIGH);
             digitalWrite(3, LOW);
             digitalWrite(4, LOW);
             digitalWrite(5, HIGH);
             digitalWrite(6, HIGH);
             digitalWrite(7, HIGH);
             digitalWrite(8, HIGH);

    case 2 : digitalWrite(2, LOW);
             digitalWrite(3, LOW);
             digitalWrite(4, HIGH);
             digitalWrite(5, LOW);
             digitalWrite(6, LOW);
             digitalWrite(7, HIGH);
             digitalWrite(8, LOW);

    case 3 : digitalWrite(2, LOW);
             digitalWrite(3, LOW);
             digitalWrite(4, LOW);
             digitalWrite(5, LOW);
             digitalWrite(6, HIGH);
             digitalWrite(7, HIGH);
             digitalWrite(8, LOW);
  
    case 4 : digitalWrite(2, HIGH);
             digitalWrite(3, LOW);
             digitalWrite(4, LOW);
             digitalWrite(5, HIGH);
             digitalWrite(6, HIGH);
             digitalWrite(7, LOW);
             digitalWrite(8, LOW);

    case 5 : digitalWrite(2, LOW);
             digitalWrite(3, HIGH);
             digitalWrite(4, LOW);
             digitalWrite(5, LOW);
             digitalWrite(6, HIGH);
             digitalWrite(7, LOW);
             digitalWrite(8, LOW);

    case 6 : digitalWrite(2, LOW);
             digitalWrite(3, HIGH);
             digitalWrite(4, LOW);
             digitalWrite(5, LOW);
             digitalWrite(6, LOW);
             digitalWrite(7, LOW);
             digitalWrite(8, LOW);

    case 7 : digitalWrite(2, LOW);
             digitalWrite(3, LOW);
             digitalWrite(4, LOW);
             digitalWrite(5, HIGH);
             digitalWrite(6, HIGH);
             digitalWrite(7, HIGH);
             digitalWrite(8, HIGH);

    case 8 : digitalWrite(2, LOW);
             digitalWrite(3, LOW);
             digitalWrite(4, LOW);
             digitalWrite(5, LOW);
             digitalWrite(6, LOW);
             digitalWrite(7, LOW);
             digitalWrite(8, LOW);

    case 9 : digitalWrite(2, LOW);
             digitalWrite(3, LOW);
             digitalWrite(4, LOW);
             digitalWrite(5, LOW);
             digitalWrite(6, HIGH);
             digitalWrite(7, LOW);
             digitalWrite(8, LOW);
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
        }
        
    }
}
