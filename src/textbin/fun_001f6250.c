#include "types.h"

extern u8 D_001DF050[];
extern void func_001F6200(s32 arg0, s32 arg1, void *arg2);

void FUN_001f6250(s32 arg0, s32 arg1)
{
    func_001F6200(arg0, arg1, D_001DF050);
}

extern __typeof__(FUN_001f6250) func_001F6250 __attribute__((alias("FUN_001f6250")));
