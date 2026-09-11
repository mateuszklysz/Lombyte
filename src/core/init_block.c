/*
STATE: C_EXACT
SYMBOL: InitBlock
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

struct InitBlock {
    int input;
    int zero;
    int *first;
    int *second;
};

extern struct InitBlock InitBlockData __asm__("D_00154940");

int InitBlockFn(int value) __asm__("func_00119568");

int InitBlockFn(int value) {
    struct InitBlock *base;
    int *ptr;
    base = &InitBlockData;
    ptr = (int *)((char *)base + 16);
    base->input = value;
    base->zero = 0;
    base->second = ptr;
    base->first = ptr;
    return (int)base;
}
