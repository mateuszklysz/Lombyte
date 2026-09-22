#include "types.h"
extern s32 FUN_0023bf18();
void FUN_0023cc10(s32 arg0) {
    FUN_0023bf18(arg0 + 0x48);
}

extern void func_0023CC10(s32 arg0) __attribute__((alias("FUN_0023cc10")));
