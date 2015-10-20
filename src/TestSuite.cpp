#include "TestSuite.h"
#include "LEDControl.h"
#include "LCDControl.h"
#include "WifiControl.h"
#include "Reporter.h"
#include "APVectorBuilder.h"

void TestSuite::ReporterTest(){ 

    Reporter report;

}

void TestSuite::LEDTest(){
     
     LEDControl led;
     led.update(20);
     wait(2);
     led.update(0);
};  

void TestSuite::LCDTest(){
    LCDControl lcd;
    
    lcd.printStrength(10);
    
    
};

void TestSuite::WifiTest(){
    
    WifiControl wifi;
    wifi.ESPconfig();
    

    
    }
    
void TestSuite::vectorTest() {
    Serial pc(USBTX, USBRX);
    pc.baud(115200);
    pc.printf("start");

    APVectorBuilder builder;
    string str = 
        "AT+CWLAP"
        "+CWLAP:(4,\"ATTvTZK3MS\",-90,\"d4:04:cd:8e:92:50\",1)"
        "+CWLAP:(4,\"HOME-D596\",-88,\"c4:27:95:61:d5:96\",1)"
        "+CWLAP:(4,\"Grubbs_Wireless\",-67,\"c0:3f:0e:9f:33:aa\",1)"
        "+CWLAP:(3,\"MOTOROLA-7EBA1\",-58,\"20:10:7a:03:f9:4e\",1)"
        "+CWLAP:(4,\"james\",-66,\"c4:27:95:4f:e7:56\",1)"
        "+CWLAP:(0,\"xfinitywifi\",-67,\"c6:27:95:4f:e7:58\",1)"
        "+CWLAP:(3,\"MIMASHI3703\",-64,\"a0:63:91:5a:82:33\",6)"
        "+CWLAP:(4,\"PrincessK&B\",-79,\"10:05:b1:1e:da:f0\",6)"
        "+CWLAP:(4,\"ATT2F2H6J3\",-68,\"e0:b7:0a:73:81:70\",6)"
        "+CWLAP:(3,\"god\",-49,\"20:aa:4b:47:8d:e2\",6)"
        "+CWLAP:(4,\"HOME-8787\",-84,\"e0:88:5d:3c:87:87\",6)"
        "+CWLAP:(4,\"ATTVrH5TA2\",-84,\"3c:df:a9:79:d7:b0\",6)"
        "+CWLAP:(0,\"xfinitywifi\",-86,\"e2:88:5d:3c:87:89\",6)"
        "+CWLAP:(3,\"StarCraftII\",-85,\"50:6a:03:7d:c7:0b\",6)"
        "+CWLAP:(4,\"HOME-9A32\",-86,\"98:6b:3d:34:9a:30\",11)"
        "+CWLAP:(4,\"Mwillii\",-61,\"10:05:b1:1e:e0:20\",11)"
        "+CWLAP:(0,\"xfinitywifi\",-86,\"96:6b:3d:34:9a:30\",11)";
        
    vector<AccessPoint> APList = builder.build(str);
    
    for (int i = 0; i < 5; i++){
        pc.printf("\r\nList Element: %s, %d", APList[i].getSSID(), APList[i].getStrength());
    }
}
    
    
    