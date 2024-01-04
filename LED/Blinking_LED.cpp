#include "mbed.h"

DigitalOut led(LED3);

int main()
{
    while(1)
    {
        led = 1;
        wait(0.2);
        led = 0;
        wait(0.2)
    }
    return 0;
}