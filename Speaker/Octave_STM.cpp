#include "mbed.h"

DigitatOut speaker(D3);

int main()
{
    float freq, period;
    int i;
    speaker.write(0.5);

    while (1)
    {
        freq = 300.0;
        for (i = 0; i < 12; i++)
        {
            period = 1.0/freq;
            speaker.period(period);
            wait(0.5);
            freq = freq * 1.0595
        }
        wait(1);
    }
    
}