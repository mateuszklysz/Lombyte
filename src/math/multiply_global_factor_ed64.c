/*
STATE: C_EXACT
SYMBOL: MultiplyGlobalFactorEd64
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

extern volatile float GlobalFactorEd64 __asm__("D_0015ED64");
float MultiplyGlobalFactorEd64(float input) __asm__("func_001F96B0");

float MultiplyGlobalFactorEd64(float input) {
    float factor = GlobalFactorEd64;
    __asm__ volatile("nop");
    return factor * input;
}
