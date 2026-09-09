/* Convert an integer to an EE single-precision value. */
float ConvertIntegerToFloat(int value) __asm__("func_001FA6C0");

float ConvertIntegerToFloat(int value) {
    return (float)value;
}
