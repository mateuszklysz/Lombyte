/*
STATE: C_EXACT
SYMBOL: GetNestedObjectValue
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Return object->field40->field0. */
int Func0012BA48(int *object) __asm__("func_0012BA48");

int Func0012BA48(int *object) {
    return *(int *)*(int **)((char *)object + 0x40);
}
