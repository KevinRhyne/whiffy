#include "mbed.h"
#include "Whiffy.cpp"
#include "LEDControl.h"
#include "TestSuite.h"

int main(){
    
    
    
    Whiffy whiffy();
    
    TestSuite tester;
    
    tester.LEDTest();
    
    Serial pc(USBTX, USBRX);

     pc.baud(115200);  // set what you want here depending on your terminal program speed
     pc.printf("LEDTEST OVER\n");
    
    tester.LCDTest();
    
    
    
    
}