#ifndef LEDCONTROL_H 
#define LEDCONTROL_H

#include "mbed.h"

class LEDControl{
    
    float strength;
    
    
    public:
        //LEDControl();
        void update(float);
    
    };
    
#endif