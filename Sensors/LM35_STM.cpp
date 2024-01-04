#include "mbed.h"
#include "string.h"
#include "TextLCDScroll.h"

TextLCDScroll lcd(D13, D12, D11, D10, D9, D8, TextLCD::LCD16x2);
Serial pc(USBTX, USBRX);
AnalogIn sensor(A1);

int main()
{
    int val = 297;
    char buf[20];
    float p;
    lcd.setLine(0, "Temperature in degree C");
    while (1)
    {
        p = sensor.read();
        sprintf(buf, "%4.2f", p*val);
        lcd.setLine(1, buf);
        wait(1);
    }
    
}