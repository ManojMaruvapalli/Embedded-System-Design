#include "mbed.h"

DigitalOut relay(D3);

int main()
{
    while (1)
    {
        relay = 1;
        wait(2);
        realy = 0;
        wait(5);
    }
    
}