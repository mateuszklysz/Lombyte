#include "types.h"
extern s32 FUN_0023c610();
void FUN_0023cce0(s32 arg0) {
    FUN_0023c610(arg0 + 0x48);
}

extern void func_0023CCE0(s32 arg0) __attribute__((alias("FUN_0023cce0")));
