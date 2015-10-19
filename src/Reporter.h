#ifndef REPORTER_H
#define REPORTER_H

#include <stdio.h>
#include <vector>
#include "LCDControl.h"
#include "LEDControl.h"



class Reporter {
    public:
        Reporter();
        
    private:
        bool mode;
        LEDControl led;
        LCDControl lcd;
        void update();
        
    
        vector<int> APs;
    
};

#endif