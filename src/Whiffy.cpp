#include "Whiffy.h"


Whiffy::Whiffy() : wifi(), reporter(){
    
    Serial pc(USBTX, USBRX);
    pc.baud(115200);
    pc.printf("\r\nReporter & WifiControl created\r\n");
    
    
    
    
};

void Whiffy::update() {
    
    Serial pc(USBTX, USBRX);
    pc.baud(115200);
    
    AnalogIn moder(p16);
    
    
    wait(2);
    pc.printf("\r\n\r\nCreating APVectorBuilder\r\n");
    wait(2);
    APVectorBuilder apBuilder;
    wait(2);
    while(true) {
        pc.printf("\r\nGetting AP list\r\n");
        wait(2);
        string real(wifi.pollAP()); //Get list of APs
        wait(2);
        pc.printf("\r\nVectorizing AP list\r\n");
        wait(1);
        vector<AccessPoint> APList(apBuilder.build(real)); //Finish building AP list
        wait(2);
        bool mode;
        
        if(moder > 0.5f) {
            mode = true;
            pc.printf("Mode: AVERAGE");
        } else {
            mode = false;
            pc.printf("Mode: CONNECTED");
        }
        wait(1);
            
        
        reporter.update(APList, mode, "AndroidAP");
    }
    
    
    
    

    //pc.printf("Access points found: \r\n");
    //pc.printf("%s", real.c_str());

    
    
    
    //pc.printf("\r\n\r\n Access Point information ------------- \r\n\r\n");
    // Print elements
    //for (int i = 0; i < APList.size(); i++){
    //    pc.printf("\r\nList Element: %s, %d", APList[i].getSSID(), APList[i].getStrength());
    //}
    
}

