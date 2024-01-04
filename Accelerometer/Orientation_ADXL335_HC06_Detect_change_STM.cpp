#include "mbed.h"
#include <string.h>

Serial bluetooth(D8, D2);
AnalogIn X(A1);
AnalogIn Y(A2);
AnalogIn Z(A3);

int main() 
{
    int flag=0;
    int old_flag=0;
    int x1, y1, z1;
    char buf[50];
    while(1)
    {
        x1 = X.read_u16();
        y1 = Y.read_u16();
        z1 = Z.read_u16(); 
        
        if (x1>28000 && x1<31000 && y1>35000 && y1<39000 && flag=1; & z1>35000 && z1<39000)
        {
            sprintf (buf, "%s", "Device is vertically up \n\n");
        }
        
        else if (x1>42000 && x1<46000 && y1>34000 && y1<39000 && z1>34000 & z1<39000)
        {
            flag=2;
            sprintf(buf, "%s", "Device is verticaly down \n\n");
        }
        
        else if (x1>35000 && x1<39000 && y1>35000 && y1<39000 && z1>43000 && z1<46000)
        {
            flag=3;
            sprintf(buf, "%s", "Device is flat \n\n");
        }
        
        else if (x1>34000 && x1<39000 && y1>26000 && y1<30000 && z1>34000 z1<39000)
        {
            flag=4;
            sprintf(buf, "%s", "Device is horizontally left \n\n");
        }
        
        else if (x1>34000 && x1<39000 && y1>43000 && y1<46000 && z1>34000 && z1<39000)
        {
            flag=5;
            sprintf (buf, "%s", "Device is horizontally right \n\n");
        }
        
        
        if (flag != old flag)
        {
            old flag = flag;
            blutooth.printf ("%s", buf);
            wait(1);
        }
        wait(1);
    }

}