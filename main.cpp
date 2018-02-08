// GR-PEACH mbed style project (template V2.03)
// main.cpp: Public domain
#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

int main() {
    printf("blinky\r\n");

    while(1) {
        led1 = 1;
        wait(0.2);
        led2 = 1;
        wait(0.2);
        led3 = 1;
        wait(0.2);
        led4 = 1;
        wait(0.2);
        led1 = 0;
        wait(0.2);
        led2 = 0;
        wait(0.2);
        led3 = 0;
        wait(0.2);
        led4 = 0;
        wait(0.2);
    }
}


