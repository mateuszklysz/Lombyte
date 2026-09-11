/*
STATE: C_EXACT
SYMBOL: readBufBeginPut__FP7ReadBufPPUc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `readBufBeginPut__FP7ReadBufPPUc`. */
/* Returns the active range and resolves its current address when requested. */
int GetStateOffsetAddress(int *state_fields, int **address_out)
    __asm__("func_0023B960");

int GetStateOffsetAddress(int *state_fields, int **address_out) {
    int *range_fields = state_fields + 0x14000;
    int range = range_fields[2] - range_fields[1];

    if (range != 0) {
        *address_out = (int *)((char *)state_fields + range_fields[0]);
    }

    return range;
}

/* Recovered original symbol name. */
extern __typeof__(GetStateOffsetAddress) readBufBeginPut__FP7ReadBufPPUc __attribute__((alias("func_0023B960")));
