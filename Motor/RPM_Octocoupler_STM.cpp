#include "mbed.h"
#include "TextLCD.h"
#include "TextLCDScroll.h"

PwmOut motor(D3);
InterruptIn wheel(D4);

TextLCDScroll lcd(D13, D12, D11, D10, D9, D8, TextLCD::LCD16x2);

int pulses = 0;
void count()
{
    pulses++;
}

int main()
{
    int RPM;
    char msg[20];
    wheel.rise($count);
    motor.period(0.10);
    motor = 0.9;
    lcd.cls;

    while (1)
    {
        wait(1.0);
        RPM = pulses * 60 / 8;
        sprintf(msg, "%6d", RPM);
        lcd.setLine(0, "The RPM is:");
        lcd.setLine(1, RPM);
        pulses = 0;
    }
    
}