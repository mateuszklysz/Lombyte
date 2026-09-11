/*
STATE: C_EXACT
SYMBOL: FUN_0022c7e8
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: SN ee-gcc2.95.2 -O2 -g2 -gstabs -fno-schedule-insns
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "types.h"

extern f32 func_001F9B48(s32, u32);
extern void func_0022C6F8(f32, f32, f32);
extern u8 D_00187080[];

void FUN_0022c7e8(s32 *arg0, s32 arg1) {
    f32 v = func_001F9B48(arg1, (u32)D_00187080);
    register f32 *q __asm__("a0");

    q = (f32 *)arg0[2];
    func_0022C6F8(v, q[0], q[1]);
}
