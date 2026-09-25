#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f7888/FUN_001f7888.s", FUN_001f7888);
#else
#include "types.h"
extern s16 D_001518EE[];
extern s32 D_0015EE8C;
extern void func_001FB440(s32, s32, s32);
extern void func_001F33B8(s32, s32, f32, f32, f32, f32, f32);
extern void func_00233980(s32, u64);
void FUN_001f7888(s32 tw, s32 th, s32 fixed, f32 scale) {
    s32 base;

    if (fixed != 0) {
        base = D_001518EE[0];
    } else {
        base = tw + th;
        if (base > 16) {
            base = 16;
        }
        base = (D_0015EE8C - (4 << base)) >> 13;
    }
    func_001FB440(tw, th, base << 13);
    func_001F33B8(1 << tw, 1 << th, scale, 0.0f, 524288.0f, 255.0f, 0.0f);
    if (fixed != 0) {
        func_00233980(0x47, 0);
    } else {
        func_00233980(0x47, 0x30000);
    }
    func_00233980(0x42, 0x8000000044);
}
#endif /* NON_MATCHING */
