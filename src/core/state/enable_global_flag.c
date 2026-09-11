/*
STATE: C_EXACT
SYMBOL: EnableGlobalFlag
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Enable the global state flag. */
extern int GlobalStateFlag __asm__("D_0015F49C");

void EnableGlobalStateFlag(void) __asm__("func_001F61E8");

void EnableGlobalStateFlag(void) {
    GlobalStateFlag = 1;
}
