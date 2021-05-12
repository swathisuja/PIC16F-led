/*
 * File:   main.c
 *
 * Created on August 16, 2010, 12:09 PM
 */

#include "pic16f1947.h"
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
void delay();

void delay() {
    int counter = 0;
    for (counter = 0; counter<10000; counter++) {
        ;
    }
}

void main(void) {
    TRISB = 0;

    while (1) {
        PORTB = 0x0F;

        delay();

        PORTB = 0x00;

        delay();
    }
}


