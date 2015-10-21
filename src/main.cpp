#include "mbed.h"
#include "Whiffy.h"
#include "LEDControl.h"
#include "TestSuite.h"
#include <string>
#include "APVectorBuilder.h"


//Test cases for all functions
void test(){
    
    Serial pc(USBTX, USBRX);

    pc.baud(115200);  // set what you want here depending on your terminal program speed
    pc.printf("---TESTING---\r\n");
    
    Whiffy whiffy();
    pc.printf("Whiffy obj created\r\n");
    
    TestSuite tester;
    pc.printf("Tester created\r\n");
    
    pc.printf("VectorBuilder test");
    tester.vectorTest();
    
    pc.printf("START ReporterTest()\r\n");
    tester.ReporterTest();
    pc.printf("END ReporterTest()\r\n");

    tester.LCDTest();
    pc.printf("LCDTest done.\r\n");
    
    tester.LEDTest();
    pc.printf("LEDTest done.\r\n");

    tester.WifiTest();
    pc.printf("WifiTest done.\r\n");

}



int main(){
    
    Whiffy whiffy;
    whiffy.update();
    

    
    // test();
}
