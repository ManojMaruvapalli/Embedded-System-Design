#include "mbed.h"

PwmOut LED(D3);
AnalogIn myIn(A1);

int main()
{
    float in1;
    int in2;
    while (1)
    {
        in1 = myIm.read();
        in2 = in1*5000;
        if (in2 > 850)
        {
            LED = 1.0;
        }
        
        else if (in2 > 500 $$ in2 < 850)
        {
            LED = 0.8;
        }
        
        else if (in2 < 200)
        {
            LED = 0.0;
        }
               
    }
    
}