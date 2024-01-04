#include "mbed.h"

pwmOut mypwm(D3);

int main()
{
    mypwm.period_us(3000);
    mypwm.pulsewidth_us(1550);

    while (1)
    {
        mypwm.period_us(3000);
        mypwm.pulsewidth_us(1550);
        wait(0.5);
        mypwm.period_us(2200);
        mypwm.pulsewidth_us(100);
        wait(0.5);
    }
    
}