/*
 @module: STM_Init
 @author: Abdullah Bagyapan
 @date:   29/06/2024
*/

/*================================== Libraries ==================================*/

#include "STM.h"

/*================================== Functions ==================================*/

int main() {

    STM_run(STATE_INIT);

    STM_state_e STM_state_e = STM_state();

    while (STM_state_e != STATE_MAX) {

        STM_state_e++; // go next state

        STM_run(STM_state_e);
        
    };

    return 0;
}