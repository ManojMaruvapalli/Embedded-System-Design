#include "mbed.h"

DigitatOut speaker(D3);

int main()
{
    while (1)
    {
        speaker = 0;
        wait(0.002);
        speaker = 1;
        wait(0.002);
    }
    
}