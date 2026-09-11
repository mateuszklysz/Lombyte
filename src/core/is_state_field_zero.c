/*
STATE: C_EXACT
SYMBOL: voBufIsEmpty
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `voBufIsEmpty` starts here; this unit covers only its beginning. */

/* Report whether the state field at byte offset 0x0C is zero. */

int IsStateFieldZero(int *state_fields) __asm__("func_0023D2C8");

int IsStateFieldZero(int *state_fields) {
    return state_fields[3] == 0;
}
