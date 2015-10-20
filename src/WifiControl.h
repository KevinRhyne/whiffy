#ifndef WIFICONTROL_H
#define WIFICONTROL_H

#include <stdio.h>
#include "mbed.h"
#include <string>

class WifiControl
{
public:
    Serial pc;
    Serial esp;

    WifiControl();
    string pollAP(); // Return buffer of access points
    void getIPMAC();
    void connect(char *, char *); // Connect to SSID with PWD
    void ESPsetbaudrate(); // Set baud rates
    void ESPconfig(); // Setup code
    void quickConfig();
    void SendCMD(); 
    void getreply();

private:
    Timer t;
    int  count,ended,timeout;

    char buf[1024];
    char snd[255];


};

//Serial pc(USBTX, USBRX);
//Serial esp(p28, p27); // tx, rx
//DigitalOut reset(p26);



#endif