/* Multiply a floating-point input by the ED70 global factor. */
extern volatile float GlobalFactorEd70 __asm__("D_0015ED70");

float MultiplyGlobalFactorEd70(float input) __asm__("func_001F9730");

float MultiplyGlobalFactorEd70(float input) {
    float factor = GlobalFactorEd70;
    __asm__ volatile("nop");
    return factor * input;
}
