#include "LCDControl.h"

LCDControl::LCDControl() : uLCD(p9,p10,p8){

    //uLCD = new uLCD_4DGL(p9,p10,p8); // serial tx, serial rx, reset pin;
    

    
}

void LCDControl::update(int strength, bool mode) { //do update stuff on LCD
    
        printStrength(strength);
}
    
void LCDControl::printStrength(int strength) {

    uLCD.cls();
    uLCD.printf("LCD strength: %d", strength);

}

