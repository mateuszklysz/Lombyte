/*
STATE: C_EXACT
SYMBOL: voBufDecCount__FP5VoBuf
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `voBufDecCount__FP5VoBuf` starts here. */
/* Decrement the state field at byte offset 0x0C when it is positive. */
void DecrementStateFieldIfPositive(volatile int *state_fields)
    __asm__("func_0023D340");

void DecrementStateFieldIfPositive(volatile int *state_fields) {
    if (state_fields[3] > 0) {
        state_fields[3] = state_fields[3] - 1;
    }
}
