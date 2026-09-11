/*
STATE: C_EXACT
SYMBOL: MultiplyGlobalFactorEd70
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Multiply a floating-point input by the ED70 global factor. */

extern volatile float GlobalFactorEd70 __asm__("D_0015ED70");

float MultiplyGlobalFactorEd70(float input) __asm__("func_001F9730");

float MultiplyGlobalFactorEd70(float input) {
    float factor = GlobalFactorEd70;
    __asm__ volatile("nop");
    return factor * input;
}
