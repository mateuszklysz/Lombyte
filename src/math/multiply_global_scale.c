/*
STATE: C_EXACT
SYMBOL: MultiplyGlobalScale
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Multiply a floating-point input by the global scale factor. */
extern volatile float GlobalScaleFactor __asm__("D_0015ED68");

float MultiplyGlobalScale(float input) __asm__("func_001F96E8");

float MultiplyGlobalScale(float input) {
    float scale = GlobalScaleFactor;
    __asm__ volatile("nop");
    return scale * input;
}
