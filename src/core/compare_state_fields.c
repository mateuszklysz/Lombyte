/*
STATE: C_EXACT
SYMBOL: voBufIsFull__FP5VoBuf
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `voBufIsFull__FP5VoBuf` starts here; this unit covers only its beginning. */

/* Report whether the two state fields contain the same value. */

int CompareStateFields(int *state_fields) __asm__("func_0023D1F8");

int CompareStateFields(int *state_fields) {
    return state_fields[3] == state_fields[4];
}
