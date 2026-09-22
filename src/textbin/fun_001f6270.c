#include "types.h"

extern u8 D_001DF3F0[];
extern void func_001F6200(s32 arg0, s32 arg1, void *arg2);

void FUN_001f6270(s32 arg0, s32 arg1)
{
    func_001F6200(arg0, arg1, D_001DF3F0);
}

extern __typeof__(FUN_001f6270) func_001F6270 __attribute__((alias("FUN_001f6270")));
