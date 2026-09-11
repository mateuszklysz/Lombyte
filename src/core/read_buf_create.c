/*
STATE: C_EXACT
SYMBOL: readBufCreate__FP7ReadBuf
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `readBufCreate__FP7ReadBuf`. */
/* Rebase the state pointer and clear its first fields. */
void InitializeStateFields(int *state_fields)
    __asm__("func_0023B940");

void InitializeStateFields(int *state_fields) {
    state_fields = (int *)((char *)state_fields + 0x50000);
    state_fields[2] = 0x50000;
    state_fields[0] = 0;
    state_fields[1] = 0;
}

/* Recovered original symbol name. */
extern __typeof__(InitializeStateFields) readBufCreate__FP7ReadBuf __attribute__((alias("func_0023B940")));
