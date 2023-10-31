/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <string>
#include "morse.h"

int init() {
    return 0;
} 

int exit() {
    return 0;
}

int main()
{
    init();  // Initialise the digital pin LED0 as an output
    DigitalOut led(LED1);
    led = 1;

    while(true) {

        MorseCode("PETRMISASOS", led);
    }

    exit();

}
