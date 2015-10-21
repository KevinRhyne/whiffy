#include "LCDControl.h"

LCDControl::LCDControl() : uLCD(p9,p10,p8){

    uLCD.printf("LCD initialized\n");
    

    
}

void LCDControl::update(int strength, bool mode) { //do update stuff on LCD
    
        printStrength(strength);
}
    
void LCDControl::printStrength(int strength) {

    wait(2);
    uLCD.printf("LCD strength: %d\n", strength);

}
