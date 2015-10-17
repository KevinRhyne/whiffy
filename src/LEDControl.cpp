#include "mbed.h"
#include "RGBLed.h"
#include "LEDControl.h"

//LED CONTROL CLASS
RGBLed myRGBled1(p22,p21,p25); //RGB PWM pins
RGBLed myRGBled2(p24,p23,p25); //RGB PWM pins


void LEDControl::update(int x){
        strength = x;
        if( strength==0 ){
            myRGBled1.write(1.0,0.0,0.0); //red
            myRGBled2.write(1.0,0.0,0.0); //red
            }
        else if( strength != 0){
            myRGBled1.write(0.0,1.0,0.0); //green
            myRGBled2.write(0.0,1.0,0.0); //green
            }
            
}