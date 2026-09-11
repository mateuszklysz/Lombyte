/*
STATE: C_EXACT
SYMBOL: IsStateFieldLarge
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Report whether the state field has reached the large-value threshold. */
int IsStateFieldLarge(int *state_fields) __asm__("func_0023AEE0");

int IsStateFieldLarge(int *state_fields) {
    return state_fields[20] >= 0x1000;
}
