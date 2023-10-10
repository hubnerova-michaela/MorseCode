#include <string>
#include "mbed.h"
 
#define MORSE_UNIT 200ms
#define DOT 333ms
#define LINE 1000ms
#define MORSE_INTER 200ms
#define PAUSE 333ms
#define PAUSELONG 1000ms
 
#define MORSE_LETTER_LENGTH 5

void M(DigitalOut led)
{
    led = 0;
    ThisThread::sleep_for(LINE);
    led = 1;
    ThisThread::sleep_for(PAUSE);
    led = 0;
    ThisThread::sleep_for(LINE);
    led = 1;
    ThisThread::sleep_for(PAUSELONG);
}

void I(DigitalOut led)
{
    led = 0;
    ThisThread::sleep_for(DOT);
    led = 1;
    ThisThread::sleep_for(PAUSE);
    led = 0;
    ThisThread::sleep_for(DOT);
    led = 1;
    ThisThread::sleep_for(PAUSELONG);
}

void A(DigitalOut led)
{
    led = 0;
    ThisThread::sleep_for(DOT);
    led = 1;
    ThisThread::sleep_for(PAUSE);
    led = 0;
    ThisThread::sleep_for(LINE);
    led = 1;
    ThisThread::sleep_for(PAUSELONG);
}

void S(DigitalOut led)
{
    led = 0;
    ThisThread::sleep_for(DOT);
    led = 1;
    ThisThread::sleep_for(PAUSE);
    led = 0;
    ThisThread::sleep_for(DOT);
    led = 1;
    ThisThread::sleep_for(PAUSE);
    led = 0;
    ThisThread::sleep_for(DOT);
    led = 1;
    ThisThread::sleep_for(PAUSELONG);
}
void O(DigitalOut led)
{
    led = 0;
    ThisThread::sleep_for(LINE);
    led = 1;
    ThisThread::sleep_for(PAUSE);
    led = 0;
    ThisThread::sleep_for(LINE);
    led = 1;
    ThisThread::sleep_for(PAUSE);
    led = 0;
    ThisThread::sleep_for(LINE);
    led = 1;
    ThisThread::sleep_for(PAUSELONG);
}


void MorseCode(string message, DigitalOut led) {
    char ch;
    for (int i = 0; i < sizeof(message); i++){
        ch = tolower(message[i]);
        switch (ch) {
            case 'a':
            A(led);
            break;
            case 's':
            S(led);
            break;
            case 'i':
            I(led);
            break;
            case 'm':
            M(led);
            break;
            case 'o':
            O(led);

        }   
    }
    
}