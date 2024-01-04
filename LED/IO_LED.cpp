#include "mbed.h"

DigitalIn input(D2);
DigitalOut led(LED3);

int main()
{
    while(1)
    {
        if(input)
        {
            led = 1;
        }
        else
        {
            led = 0;
        }
    }
    return 0;
}