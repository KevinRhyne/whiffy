#include "LCDControl.h"

LCDControl::LCDControl() : uLCD(p9,p10,p8){

    uLCD.printf("LCD initialized\n");
    

    
}

void LCDControl::update(int strength, bool mode) { //do update stuff on LCD
    
        printStrength(strength);
}
    
void LCDControl::printStrength(float strength) {

    wait(2);
    //uLCD.cls();
    uLCD.printf("Strength: %.2f\n", strength);

}

void LCDControl::printString(string printer) {
    wait(1);
    uLCD.printf(printer.c_str());
    wait(1);
    }