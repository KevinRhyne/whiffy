#ifndef ACCESSPOINT_H
#define ACCESSPOINT_H

#include "mbed.h"
#include <string>

class AccessPoint {
    
    public:
        AccessPoint(string, int);
        void setSSID(string);
        void setStrength(int);
        string getSSID();
        int getStrength();
    
    private:
        string SSID;
        int strength;
        float scaledStrength;
        bool connected;

};


#endif