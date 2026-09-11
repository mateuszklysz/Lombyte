/*
STATE: C_EXACT
SYMBOL: IsNestedObjectFieldZero
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Return whether object->field40->field4 is zero. */

int Func0012BA58(int *object) __asm__("func_0012BA58");

int Func0012BA58(int *object) {
    return *(int *)((char *)*(int **)((char *)object + 0x40) + 4) == 0;
}
