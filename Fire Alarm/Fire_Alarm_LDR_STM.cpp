#include "mbed.h"

PwmOut bulb(D3);
PwmOut speaker(D6);
AnalogIn ldr(A1);
AnalogIn lm35(A0);

int main()
{
    float light, temper;
    int lvalue, tvalue;
    
    bulb.period(0.02);                  //20ms
    speaker.period_ms(3);               //333Hz
    
    while (1)
    {
        light = ldr.read();
        lvalue = light * 5000;
        if (lvalue > 4000)
        {
            bulb.write(0.0);
        }
        else
        {
            bulb.write(1.0);
        }
        
        temper = lm35.read();
        tvalue = temper * 1000;
        if (tvalue >96)
        {
            speaker = 0.5;
        }
        else
        {
            speaker.period_us(3000);
            speaker = 0.0;
        }
    }
    
}