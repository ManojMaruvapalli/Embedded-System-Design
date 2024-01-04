#include "mbed.h"

PwmOut speaker(D3);

int main() 
{

    float freq, period;
    int i;
    speaker.write (0.5);
    
    while (1) 
    {
        freq = 262.0;
        period = 1.0 / freq;
        speaker.period (period);
        wait (0.5);
        
        freq = 262.0;
        period = 1.0 / freq;
        speaker.period (period);
        wait (0.5);
        
        freq = 294.0;
        period = 1.0 / freq;
        speaker.period (period); 
        wait (0.5);
        
        freq = 262.0;
        period = 1.0 / freq;
        speaker.period (period); 
        wait (0.5);
        
        freq = 349.0;
        period = 1.0 / freq;
        speaker.period (period); 
        wait (0.5);
        
        freq = 330.0;
        period = 1.0 / freq;
        speaker.period (period); 
        wait (0.5);
        wait (0.5);
    }

}