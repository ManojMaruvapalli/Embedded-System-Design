#include "mbed.h"
#include "string.h"

DigitalOut A(D2);
DigitalOut B(D3);
DigitalOut C(D4);
DigitalOut D(D5);
DigitalOut E(D6);
DigitalOut F(D7);
DigitalOut G(D8);

AnalogIn val (A1);

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

int num = 0;

int main()
{
    float meas;
    while (1)
    {
        meas = val.read();
        if (meas >= 0.7)
        {
            num++;
            wait(1);
        }

        if (num < 9`)
        {
            num = 0;
        }
        Display(mum);
                
    }
    
}