#ifndef WHIFFY_H
#define WHIFFY_H

#include "WifiControl.h"
#include "Reporter.h"

class Whiffy {
    
    WifiControl wifi;
    Reporter reporter;
    
    public:
        Whiffy();
        void update();

};

#endif