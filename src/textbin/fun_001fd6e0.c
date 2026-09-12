/*
STATE: C_EXACT
SYMBOL: FUN_001fd6e0
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: ee-gcc2.9-991111-01-patched (-O2 -g2 -gstabs; R5900 quad saves + classic mult) + Ps2EeAs padless
DECISION: promoted via ASTRA full-ELF gate (2026-09-12)
BLOCKER: none
*/

/* FUN_001fd6e0 exact recovery: size-bounded ring-buffer pointer setup; the patched profile (lq/sq saves) reproduces all 25 instructions. */

#include "types.h"
struct M2c_D_001940C0 {
    u8 pad_0[0x4];
    s32 unk4;
    s32 unk8;
};

extern s32 D_00160F0C;
extern struct M2c_D_001940C0 D_001940C0;
s32 FUN_001fd6e0(u32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 <= 0x20000U) {
        *arg1 = (D_001940C0.unk4 + D_00160F0C) - arg0;
        *arg2 = (D_001940C0.unk8 + D_00160F0C) - arg0;
        return 0;
    }
    *arg1 = 0;
    *arg2 = 0;
    return -1;
}
extern __typeof__(FUN_001fd6e0) func_001FD6E0 __attribute__((alias("FUN_001fd6e0")));
