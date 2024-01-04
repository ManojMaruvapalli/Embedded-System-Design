#include "mbed.h"

PwmOut motor(D3);
DigitalIn push_switch(D2);

int main()
{
    int state = 1;
    motor.period(0.01);
    motor = 1.0;

    while (1)
    {
        if (pudh_switch == 0)
        {
            state++;
            if (state == 4)
            {
                state = 1;
            }
            
        }
        
        while (push_switch == 0)
        {
            switch (state)
            {
                case 1 : motor = 1.0;
                break;
            
                case 2 : motor = 0.8;
                break;
            
                case 3 : motor = 0.0
                break;
            }
        }
        
    }
    
}   