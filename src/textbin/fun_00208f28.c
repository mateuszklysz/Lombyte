/*
STATE: C_EXACT
SYMBOL: FUN_00208f28
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: ee-gcc2.9-991111-01-patched (-O2 -g2 -gstabs) + Ps2EeAs padless
DECISION: promoted via ASTRA full-ELF gate (2026-09-12)
BLOCKER: none
*/

/* FUN_00208f28 exact recovery: retail keeps the `D_0015EEB4 |= 0x40` result
   in v0 and the 0x15 constant in v1; without the pin the allocator swaps them
   (98.67% under the patched profile).  The register-asm pin reproduces
   retail's block, one instruction stream for all 30 instructions. */
#include "types.h"
#include "rnc/assembly_textbin_fun_00208f28_types.h"

extern struct M2c_D_0013D290 D_0013D290;
extern s32 D_0015EEB0;
extern s32 D_0015EEB4;
extern s32 func_001FBAB8();

void FUN_00208f28(void) {
    register s32 flags asm("v0");

    if ((D_0013D290.unkD4 < 3) && (D_0013D290.unkDC < 0)) {
        if (D_0013D290.unkE4 != 0) {
            func_001FBAB8(3, 0);
            D_0015EEB0 = 0x15;
            flags = D_0015EEB4 | 0x40;
            D_0015EEB4 = flags;
        } else {
            D_0015EEB0 = 1;
        }
    }
}
