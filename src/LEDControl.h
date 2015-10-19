#ifndef LEDCONTROL_H 
#define LEDCONTROL_H

#include "mbed.h"

class LEDControl{
    
    int strength;
    
    
    public:
        //LEDControl();
        void update(int);
    
    };
    
#endif