/*
STATE: C_EXACT
SYMBOL: LookupIndex
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

extern int LookupTable[] __asm__("D_00154F80") __attribute__((section(".data")));

int LookupIndex(int index) __asm__("func_0011A458");

int LookupIndex(int index) {
    return LookupTable[index];
}
