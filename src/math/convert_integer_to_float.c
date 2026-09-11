/*
STATE: C_EXACT
SYMBOL: ConvertIntegerToFloat
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Convert an integer to an EE single-precision value. */

float ConvertIntegerToFloat(int value) __asm__("func_001FA6C0");

float ConvertIntegerToFloat(int value) {
    return (float)value;
}
