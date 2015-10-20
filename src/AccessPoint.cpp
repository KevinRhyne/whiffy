#include "AccessPoint.h"



AccessPoint::AccessPoint(string ssid, int stren) {
    
    SSID = ssid;
    strength = stren;
    
    
}

void AccessPoint::setSSID(string newssid) {
    SSID = newssid;    
}

void AccessPoint::setStrength(int newStrength) {
    strength = newStrength;
}

string AccessPoint::getSSID() {
    return SSID;
}

int AccessPoint::getStrength() {
    return strength;
}