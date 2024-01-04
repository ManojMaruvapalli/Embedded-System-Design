#include "mbed.h"

AnalogIn analog_value(A1);
DigitalOut led(D2);

int main()
{
    float meas;
    while (1)
    {
        led = 1;
        meas = analog_value.read();
        if (meas >= 0.7)
        {
            led = 0;
            wait(3);
            led = 1;

        }
        
    }
    
}