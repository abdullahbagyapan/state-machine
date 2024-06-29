/*
 @module: STM
 @author: Abdullah Bagyapan
 @date:   11/05/2024
*/

#ifndef __STATEMACHINE_H
#define __STATEMACHINE_H

/*================================== Defined Variables ==================================*/

typedef enum {
    STATE_INIT,
    //STATE_1,
    //STATE_2,
    //STATE_3,
    //STATE_4,
    //STATE_5,
    STATE_MAX,
} STM_state_e;

/*================================== Functions ==================================*/

/*
 @brief:  Initialize given state

 @author  Abdullah Bagyapan

 @date    29/06/2024

 @details This function is useful when start the first state(state_init)

 @param   state_e: The state that want to run

 @return  None
*/
void STM_run(STM_state_e state_e);

/*
 @brief:  Returns current state

 @author  Abdullah Bagyapan

 @date    29/06/2024

 @param   None

 @return  STM_state_e: The current state
*/
STM_state_e STM_state();

#endif // __STATEMACHINE_H