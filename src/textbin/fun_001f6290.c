/*
STATE: C_EXACT
SYMBOL: FUN_001f6290
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern u8 D_001DF790[];
extern void func_001F6200(s32 arg0, s32 arg1, void *arg2);

void FUN_001f6290(s32 arg0, s32 arg1)
{
    func_001F6200(arg0, arg1, D_001DF790);
}

extern __typeof__(FUN_001f6290) func_001F6290 __attribute__((alias("FUN_001f6290")));
