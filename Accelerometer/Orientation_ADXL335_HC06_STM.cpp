#include "mbed.h"
#include "string.h"

Serial bluetooth(D8, D2);
AnalogIn X(A1);
AnalogIn Y(A2);
AnalogIn Z(A3);

int main()
{
        int x1, y1, z1;
    while (1)
    {
        x1 = X.read_u16();
        y1 = Y.read_u16();
        z1 = Z.read_u16();

        if (x1>28000 && x1<31000 && y1>35000 && y1<39000 && z1>35000 && z1<39000)
        {
            bluetooth.printf ("Device is vertically up \n\n");
            wait(1);
        }
        
        else if (x1>42000 && x1<46000 && y1>34000 && y1<39000 && z1>34000 && z1<39000)
        {
            bluetooth.printf ("Device is verticaly down \n\n");
            wait(1);
        }
        
        else if (x1>35000 && x1<39000 && y1>35000 && y1<39000 && z1>43000 && z1<46000)
        {
            bluetooth.printf ("Device is flat \n\n"); 
            wait(1);
        }
        
        else if (x1>34000 && x1<39000 && y1>26000 && y1<30000 && z1>34000 && z1<39000)
        {
            bluetooth.printf ("Device is horizontally left \n\n");
            wait(1);
        }
        
        else if (x1>34000 && x1<39000 && y1>43000 && y1<46000 && z1>34000 && z1<39000)
        {
            bluetooth.printf ("Device is horizontally right \n\n");
            wait(1);
        }
        wait(2);
    }
}