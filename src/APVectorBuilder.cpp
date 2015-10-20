#include "APVectorBuilder.h"
#include "mbed.h"

vector<AccessPoint> APVectorBuilder::build(string rawstr){
    Serial pc(USBTX, USBRX);
    pc.baud(115200);
    
    pc.printf("\r\n\r\n -------- Hello from Vectorbuilder\r\n");
    vector<AccessPoint> APList;
    vector<string> Vssid;
    vector<int> Vstrength;
    
    APList.push_back(AccessPoint("TestSSID", 69));
    
    string curSSID;
    string curStrength;
    
    int i = 0;
    
    while(i < rawstr.length()){
        
        AccessPoint currentAP("",0);
    
        while (rawstr[i] != '\"') {
            i++;
        }
        while (rawstr[i+1] != '\"') {
            curSSID += rawstr[i+1];
            i++;
        }
        pc.printf("\r\n ADDING NEW ELEMENT: %s", curSSID.c_str());
        currentAP.setSSID(curSSID);
        //Vssid.push_back(curSSID);
        curSSID = "";
        i += 4;
        
        while(rawstr[i] != ',') {
            curStrength += rawstr[i];
            i++;        
        }
        currentAP.setStrength(atoi(curStrength.c_str()));
        //Vstrength.push_back(atoi(curStrength.c_str()));
        curStrength = "";
       while(rawstr[i] != '+') {
           i++;
        }
        
        APList.push_back(currentAP);
    
    }
        
    return APList;
    
}




