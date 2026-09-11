/*
STATE: C_EXACT
SYMBOL: videoDecReset__FP8VideoDec
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `videoDecReset__FP8VideoDec`. */

/* Clear the state field used by the small state helpers. */

void ClearStateField(int *state_fields) __asm__("func_0023CC30");

void ClearStateField(int *state_fields) {
    state_fields[42] = 0;
}

/* Recovered original symbol name. */
extern __typeof__(ClearStateField) videoDecReset__FP8VideoDec __attribute__((alias("func_0023CC30")));
