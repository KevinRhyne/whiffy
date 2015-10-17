#include "TestSuite.h"
#include "LEDControl.h"
#include "LCDControl.h"


void TestSuite::LEDTest(){
     
     LEDControl led;
     led.update(20);
     wait(5);
     led.update(0);
};  

void TestSuite::LCDTest(){
    LCDControl lcd;
    
    lcd.printStrength(10);
    
    
};