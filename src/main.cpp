#include "mbed.h"
#include "Whiffy.cpp"
#include "LEDControl.h"
#include "TestSuite.h"

int main(){
    

    Serial pc(USBTX, USBRX);

    pc.baud(115200);  // set what you want here depending on your terminal program speed
    pc.printf("Device init\n");

    
    Whiffy whiffy();
    pc.printf("Whiffy obj created\n");
    
    TestSuite tester;
    pc.printf("Tester created\n");

    tester.LCDTest();
    pc.printf("LCDTest done.\n");
    
    tester.LEDTest();
    pc.printf("LEDTest done.\n");

    tester.WifiTest();
    pc.printf("WifiTest done.\n");

    

    
    
    
    
}