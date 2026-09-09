/* Return object->field40->field0. */
int Func0012BA48(int *object) __asm__("func_0012BA48");

int Func0012BA48(int *object) {
    return *(int *)*(int **)((char *)object + 0x40);
}
