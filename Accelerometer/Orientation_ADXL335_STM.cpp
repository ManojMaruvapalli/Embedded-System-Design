#include "mbed.h"

Serial pc(USBTX, USBRX);

AnalogIn x(A0);
AnalogIn y(A1);
AnalogIn z(A2);

int main()
{
    int x1, y1, z1;
    while (1)
    {
        x1 = x.read_u16();
        y1 = y.read_u16();
        z1 = z.read_u16();

        pc.printf("%d, %d, %d\n", x1, y1, z1);

        wait(1);
    }
    
}