#include <stdio.h>
#include <vector>
#include "LCDControl.h"
//#include "LEDControl.h"



class Reporter {
    public:
        Reporter();
        
    private:
        //LEDControl led;
        LCDControl lcd;
        void update();
    
        //vector<int> APs;
    
};