#include "TestSuite.h"
#include "LEDControl.h"
#include "LCDControl.h"
#include "WifiControl.h"

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
    
    
    