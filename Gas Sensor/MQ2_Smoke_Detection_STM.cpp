#include "mbed.h"

PwmOut mypwm(D3);
AnalogIn G(A1);
int i = 0;

void fire()
{
    i = 0;
    while (1)
    {
        mypwm.period_us(3000);
        mypwm.pulsewidth_us(1550);
        mypwm.period_us(3000);
        mypwm.pulsewidth_us(1550);
        wait(0.5);
        mypwm.period_us(2200);
        mypwm.pulsewidth_us(100);
        wait(0.5);
        i++
    }

    int main()
    {
        float x;
        while (1)
        {
            x = G.read();
            printf("%4.2f\n", x);
            if (x > 0.30)
            {
                fire();
                wait(1);
                mypwm.period_us(10);
                mypwm.pulsewidth_us(5);
            }
            
        }

    }
    
}