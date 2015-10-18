#include "mbed.h"
#include <string>

class AccessPoint {
    
    public:
        AccessPoint(string, int);
    
    private:
        string SSID;
        int strength;
        float scaledStrength;
        bool connected;

};
