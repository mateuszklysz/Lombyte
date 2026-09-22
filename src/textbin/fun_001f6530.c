#include "types.h"
extern u8 D_001DF050[];
extern s32 FUN_001f44b8();
extern s32 FUN_001f62b0();
void FUN_001f6530(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    FUN_001f62b0(arg0, arg1, arg2, arg3, arg4, FUN_001f44b8(1), D_001DF050);
}

extern void func_001F6530(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) __attribute__((alias("FUN_001f6530")));
