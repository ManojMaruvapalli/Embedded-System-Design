#include "mbed.h"

Serial bluetooth(D8, D2);
int i = 0;

int main()
{
    bluetooth.printf("Hello Github\n\n");
    wait(5);
    bluetooth.printf("Trial\n");
    bluetooth.printf("Bluetooth Connection Test");
}