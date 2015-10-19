#ifndef LCDCONTROL_H
#define LCDCONTROL_H

#include "mbed.h"
#include "uLCD_4DGL.h"

class LCDControl{
    
    // serial tx, serial rx, reset pin;
    int strength;
    bool mode;
    
    public:
    
    uLCD_4DGL uLCD; 
    
    LCDControl();
    void update(int, bool);
    void printStrength(int);

};
    
#endif