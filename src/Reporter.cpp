#include <stdio.h>
#include <vector>
#include "Reporter.h"

using namespace std;

Reporter::Reporter() : led(), lcd() { 
    

};

void Reporter::update(vector<AccessPoint> currentAPs, bool mode, string focus){
            
            Serial pc(USBTX, USBRX);
            pc.baud(115200);
            wait(2);
            pc.printf("Reporter updating...\r\n");
            wait(2);

            vector<AccessPoint> curatedAPs;
            vector<AccessPoint> connectedAP;
            
            for(int i = 0; i < currentAPs.size(); i++){
                if (currentAPs[i].getStrength() < 70) //Remove weak APs
                curatedAPs.push_back(currentAPs[i]);
            }
            
            for(int i = 0; i < currentAPs.size(); i++){ //Waste of memory.. fix this
                if (currentAPs[i].getSSID() == focus) //Leave connected AP
            connectedAP.push_back(currentAPs[i]);
    }
            if(mode == true) {
                averager(curatedAPs);
            } else {
                averager(connectedAP);
            }
                
            wait(2);
            
}

int Reporter::averager(vector<AccessPoint> currentAPs) {
    
    wait(1);
    Serial pg(USBTX, USBRX);
    pg.baud(115200);
    wait(1);
    
    
    Serial pc(USBTX, USBRX);
    pc.baud(115200);
    
    
    float sum = 0;
    float average = 0;
    
    for(int i = 0; i < currentAPs.size(); i++) {
        sum += currentAPs[i].getStrength();
    }
    
    average = sum / currentAPs.size();
    
    pc.printf("Average was %f\r\n", average);
    wait(1);
    led.update(average);
    
    return (int) average;
    
}