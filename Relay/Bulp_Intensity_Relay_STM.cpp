#include "mbed.h"

PwmOut bulp(D3);

int main()
{
    bulp.period(0.02);

    while (1)
    {
        bulp.write = 1;
        wait(3.0);
        
        bulp.write = 0.8;
        wait(3.0);

        bulp.write = 0.6;
        wait(3.0);

        bulp.write = 0.4;
        wait(3.0);

        bulp.write = 0.2;
        wait(3.0);

        bulp.write = 0.0;
        wait(3.0);
    }
    
}
