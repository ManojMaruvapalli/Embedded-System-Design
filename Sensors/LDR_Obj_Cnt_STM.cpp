#include "mbed.h"
#include "string.h"

DigitalOut A(D2);
DigitalOut B(D3);
DigitalOut C(D4);
DigitalOut D(D5);
DigitalOut E(D6);
DigitalOut F(D7);
DigitalOut G(D8);

AnalogIn Entry (A1);
AnalogIn Exit (A2);

void Display(int disp)
switch (disp)
{
    case 0: A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 1; break;
    case 1: A = 1, B = 0, C = 0, D = 1, E = 1, F = 1, G = 1; break;
    case 2: A = 0, B = 0, C = 1, D = 0, E = 0, F = 0, G = 1; break;
    case 3: A = 0, B = 0, C = 0, D = 0, E = 1, F = 1, G = 0; break;
    case 4: A = 1, B = 0, C = 0, D = 1, E = 1, F = 0, G = 0; break;
    case 5: A = 0, B = 1, C = 0, D = 0, E = 1, F = 0, G = 0; break;
    case 6: A = 0, B = 1, C = 0, D = 0, E = 0, F = 0, G = 0; break;
    case 7: A = 0, B = 0, C = 0, D = 1, E = 1, F = 1, G = 1; break;
    case 8: A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0; break;
    case 9: A = 0, B = 0, C = 0, D = 0, E = 1, F = 0, G = 0; break;
}

int main()
{
    float en, ex;
    int per = 0;
    while (1)
    {
        en = Entry.read();
        ex = Exit.read();

        en = en*5000;
        ex = ex*5000;

        if (en < 200)
        {
            per = per +1;
            Display(per);
            wait(1);
        }

        else if (ex < 200)
        {
            per = per - 1;
            Display(per);
            wait(1);
        }

        else if (per <= 0 || per > 9)
        {
            per = 0;
            Display(per);
            wait(1);
        }

        else
        {
            Display(per);
            wait(1);
        }    
        
    }
    
}