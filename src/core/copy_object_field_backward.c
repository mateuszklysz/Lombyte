/* Copy object field 3 into field 2 and return the copied value. */
int Func0012BC10(int *object) __asm__("func_0012BC10");

int Func0012BC10(int *object) {
    int value = object[3];
    object[2] = value;
    return value;
}
