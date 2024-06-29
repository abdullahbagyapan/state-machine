/*
 @module: STM
 @author: Abdullah Bagyapan
 @date:   11/05/2024
*/

/*================================== Libraries ==================================*/

#include "STM.h"
#include "STM_Init.h"

/*================================== Defined Variables ==================================*/

static STM_state_e _STM_state_e; // current state;

void (*state_table[STATE_MAX])() = {
    STM_state_init,
    // fill here with other state
};

/*================================== Functions ==================================*/

void STM_run(STM_state_e state_e) {

    state_table[state_e](); // run given state

    return;
    
}

STM_state_e STM_state() {

    return _STM_state_e;
}