/*
STATE: C_EXACT
SYMBOL: ReadStateField
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: ee-gcc2.9-991111-01-patched (-O2 -g2 -gstabs; R5900 quad saves + classic mult) + Ps2EeAs padless
DECISION: promoted via ASTRA full-ELF gate (2026-09-12)
BLOCKER: none
*/

/* ReadStateField exact recovery: guard on the state byte bit 0x20 then forward the unk10 field; the patched profile (lq/sq saves) reproduces all 12 instructions. */

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x34];
    u16 unk34;
    u8 pad_36[0x42];
    struct M2c_arg0_unk78 * unk78;
};

struct M2c_arg0_unk78 {
    u8 pad_0[0x10];
    s32 unk10;
};

s32 ReadStateField(struct M2c_arg0 *arg0) {
    if (arg0 == NULL) {
        goto block_2;
    }
    goto block_4;
block_2:
block_3:
    return 0;
block_4:
    if (!(arg0->unk34 & 0x20)) {
        goto block_3;
    }
    return arg0->unk78->unk10;
}
