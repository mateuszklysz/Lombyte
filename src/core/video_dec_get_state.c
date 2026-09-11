/*
STATE: C_EXACT
SYMBOL: videoDecGetState
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `videoDecGetState`. */
/* Return the state field at byte offset 0xA8. */
int GetStateField(int *state_fields) __asm__("func_0023CC80");

int GetStateField(int *state_fields) {
    return state_fields[42];
}

/* Recovered original symbol name. */
extern __typeof__(GetStateField) videoDecGetState __attribute__((alias("func_0023CC80")));
