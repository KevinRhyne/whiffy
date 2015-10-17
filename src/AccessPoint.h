#include "mbed.h"

class AccessPoint {
    
    public:
        AccessPoint();
    
    private:
        //string SSID;
        int strength;
        float scaledStrength;
        bool connected;

};
