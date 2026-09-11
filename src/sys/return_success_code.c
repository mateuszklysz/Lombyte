/*
STATE: C_EXACT
SYMBOL: ReturnSuccessCode
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Return the success status used by the adjacent core callback helpers. */

int ReturnSuccessCode(void) __asm__("func_00118EC0");

int ReturnSuccessCode(void) {
    return 1;
}
