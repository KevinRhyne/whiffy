#include "mbed.h"
#include "RGBLed.h"
#include "LEDControl.h"

//LED CONTROL CLASS
RGBLed myRGBled1(p22,p21,p25); //RGB PWM pins
RGBLed myRGBled2(p24,p23,p25); //RGB PWM pins


void LEDControl::update(float stren){
        
        Serial pc(USBTX, USBRX);
        pc.baud(115200);
        
        strength = stren;
        wait(2);
        pc.printf("Passed strength: %f\r\n", strength);
        
        float green = (100-strength) / 95;
        float red = strength / 100;
        wait(1);
        pc.printf("Calculated green: %f\r\n", green);
        wait(2);
        pc.printf("Calculated red: %f\r\n", red);
        
        
        myRGBled1.write(red , green ,0.0); //red
        myRGBled2.write(red,green,0.0); //red
            
}