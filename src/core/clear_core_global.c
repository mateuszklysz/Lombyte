/*
STATE: C_EXACT
SYMBOL: ClearCoreGlobal
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Clear the core global word. */
extern int CoreGlobalWord __asm__("D_0012FBF0") __attribute__((section(".data")));

void ClearCoreGlobal(void) __asm__("func_00118BC0");

void ClearCoreGlobal(void) {
    CoreGlobalWord = 0;
}
