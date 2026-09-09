extern volatile float GlobalFactorEd64 __asm__("D_0015ED64");
float MultiplyGlobalFactorEd64(float input) __asm__("func_001F96B0");

float MultiplyGlobalFactorEd64(float input) {
    float factor = GlobalFactorEd64;
    __asm__ volatile("nop");
    return factor * input;
}
