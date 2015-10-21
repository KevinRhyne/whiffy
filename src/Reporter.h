#ifndef REPORTER_H
#define REPORTER_H

#include <stdio.h>
#include <vector>
#include "LCDControl.h"
#include "LEDControl.h"
#include "AccessPoint.h"



class Reporter {
    public:
        Reporter();
        void update(vector<AccessPoint>, bool, string);
        
    private:
        bool mode;
        LEDControl led;
        LCDControl lcd;
        int averager(vector<AccessPoint>);
        
    
};

#endif