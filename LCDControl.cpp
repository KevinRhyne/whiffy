//import LCD stuff
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(p9,p10,p8); // serial tx, serial rx, reset pin;

class LCDControl{
    int strength;
    bool mode;
    public:
    void update(int, bool);
    void printStrength(int);
    };
    
    void LCDControl::update(int x, bool y) { //do update stuff on LCD
        strength = x;
        mode = y;
        printStrength(strength);
    }
    
    void LCDControl::printStrength(int x) {
        uLCD.cls();
        uLCD.printf("Signal Strenght: %d", x);
    }
    