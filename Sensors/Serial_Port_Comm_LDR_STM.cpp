#include "mbed.h"

Serial pc(USBTX, USBRX);
AnalogIn analog_value(A1);

int main()
{
    float meas_r
    while (1)
    {
        meas_r = analog_value.read();
        pc.printf("Printing on LDR %f \n ", meas_r);
        wait(2);
    }
    return(1);
}