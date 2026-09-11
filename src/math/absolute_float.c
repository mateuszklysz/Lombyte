/*
STATE: C_EXACT
SYMBOL: AbsoluteFloat
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Return the absolute value of an EE single-precision value. */

float AbsoluteFloat(float input) __asm__("func_001F99C0");

float AbsoluteFloat(float input) {
    return __builtin_fabsf(input);
}
