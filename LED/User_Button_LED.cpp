#include "mbed.h"

DigitalIn input(USER_BUTTON);
DigitalOut led(LED3);

int main()
{
    while(1)
    {
        if(!input)
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