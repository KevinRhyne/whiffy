#include <stdio.h>
#include "mbed.h"

class WifiControl {
    public:
        Serial *pc; 
        Serial *esp;
    
        WifiControl();
        void wifiGo();
        void ESPsetbaudrate();
        void ESPconfig();
        void SendCMD();
        void getreply();
        
    private:
        Timer t;
        int  count,ended,timeout;
        
        char buf[1024];
        char snd[255];
 
        char ssid[32];     // enter WiFi router ssid inside the quotes
        char pwd [32]; // enter WiFi router password inside the quotes
        
        
};

//Serial pc(USBTX, USBRX);
//Serial esp(p28, p27); // tx, rx
//DigitalOut reset(p26);