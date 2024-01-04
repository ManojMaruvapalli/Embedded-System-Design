#include "mbed.h"

PwmOut bulp(D3);
AnalogIn ldr(A1);

int main()
{
    float light;
    int value;

    bulp.period(0.2);

    while (1)
    {
        light = ldr.read();
        value = light*5000;

        if (value > 4000)
        {
            bulp.write = 0.0;
        }
        
        else
        {
            bulp.write = 1.0;
        }
        
    }
    
}