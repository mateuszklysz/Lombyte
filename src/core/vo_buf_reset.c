/*
STATE: C_EXACT
SYMBOL: voBufReset__FP5VoBuf
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `voBufReset__FP5VoBuf`. */

/* Clear the two state fields used by the utility object. */

void ClearStateFields(volatile int *state_fields) __asm__("func_0023D1E8");

void ClearStateFields(volatile int *state_fields) {
    state_fields[3] = 0;
    state_fields[2] = 0;
}

/* Recovered original symbol name. */
extern __typeof__(ClearStateFields) voBufReset__FP5VoBuf __attribute__((alias("func_0023D1E8")));
