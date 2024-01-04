#include "mbed.h"
#include "TextLCD.h"
#include "TextLCDScroll.h"

TextLCDScroll lcd(D13, D12, D11, D10, D9, D8, TextLCD::LCD16x2);

int main()
{
    lcd.cls();
    lcd.setSpeed(2); //2 charecters per second
    while(1)
    {
        lcd.setLine(0, "Trial 1");
        lcd.setLine(1, "31st, Dec 2022.");
        wait(25);
    }
}