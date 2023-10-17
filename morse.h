#include <cctype>
#include <string>
#include "mbed.h"
 
#define MORSE_UNIT 200ms
#define DOT 333ms
#define LINE 1000ms
#define MORSE_INTER 200ms
#define PAUSE 333ms
#define PAUSELONG 1000ms
 
#define MORSE_LETTER_LENGTH 5


void Dot(DigitalOut led) {
    led = 1;
    ThisThread::sleep_for(DOT);
    led = 0;
    ThisThread::sleep_for(PAUSE);
}

void Line(DigitalOut led) {
    led = 1;
    ThisThread::sleep_for(LINE);
    led = 0;
    ThisThread::sleep_for(PAUSE);
}

void A(DigitalOut led) {
    Dot(led);
    Line(led);
}

void B(DigitalOut led) {
    Line(led);
    Dot(led);
    Dot(led);
    Dot(led);
}

void C(DigitalOut led) {
    Line(led);
    Dot(led);
    Line(led);
    Dot(led);
}

void D(DigitalOut led) {
    Line(led);
    Dot(led);
    Dot(led);
}

void E(DigitalOut led) {
    Dot(led);
}

void F(DigitalOut led) {
    Dot(led);
    Dot(led);
    Line(led);
    Dot(led);
}

void G(DigitalOut led) {
    Line(led);
    Line(led);
    Dot(led);
}

void H(DigitalOut led) {
    Dot(led);
    Dot(led);
    Dot(led);
    Dot(led);
}

void I(DigitalOut led) {
    Dot(led);
    Dot(led);
}

void J(DigitalOut led) {
    Dot(led);
    Line(led);
    Line(led);
    Line(led);
}

void K(DigitalOut led) {
    Line(led);
    Dot(led);
    Line(led);
}

void L(DigitalOut led) {
    Dot(led);
    Line(led);
    Dot(led);
    Dot(led);
}

void M(DigitalOut led) {
    Line(led);
    Line(led);
}

void N(DigitalOut led) {
    Line(led);
    Dot(led);
}

void O(DigitalOut led) {
    Line(led);
    Line(led);
    Line(led);
}

void P(DigitalOut led) {
    Dot(led);
    Line(led);
    Line(led);
    Dot(led);
}

void Q(DigitalOut led) {
    Line(led);
    Line(led);
    Dot(led);
    Line(led);
}

void R(DigitalOut led) {
    Dot(led);
    Line(led);
    Dot(led);
}

void S(DigitalOut led) {
    Dot(led);
    Dot(led);
    Dot(led);
}

void T(DigitalOut led) {
    Line(led);
}

void U(DigitalOut led) {
    Dot(led);
    Dot(led);
    Line(led);
}

void V(DigitalOut led) {
    Dot(led);
    Dot(led);
    Dot(led);
    Line(led);
}

void W(DigitalOut led) {
    Dot(led);
    Line(led);
    Line(led);
}

void X(DigitalOut led) {
    Line(led);
    Dot(led);
    Dot(led);
    Line(led);
}

void Y(DigitalOut led) {
    Line(led);
    Dot(led);
    Line(led);
    Line(led);
}

void Z(DigitalOut led) {
    Line(led);
    Line(led);
    Dot(led);
    Dot(led);
}



void MorseCode(string message, DigitalOut led) {
    char ch;
    for (int i = 0; i < sizeof(message); i++){
        ch = toupper(message[i]);
        switch (ch) {
            case 'A':
                A(led);
                ThisThread::sleep_for(PAUSE);
                ThisThread::sleep_for(PAUSE);
                    break;
                case 'B':
                    B(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'C':
                    C(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'D':
                    D(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'E':
                    E(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'F':
                    F(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'G':
                    G(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'H':
                    H(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'I':
                    I(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'J':
                    J(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'K':
                    K(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'L':
                    L(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'M':
                    M(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'N':
                    N(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'O':
                    O(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'P':
                    P(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'Q':
                    Q(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'R':
                    R(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'S':
                    S(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'T':
                    T(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'U':
                    U(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'V':
                    V(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'W':
                    W(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'X':
                    X(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'Y':
                    Y(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;
                case 'Z':
                    Z(led);
                    ThisThread::sleep_for(PAUSE);
                    ThisThread::sleep_for(PAUSE);
                    break;

        }   
    }
    
}