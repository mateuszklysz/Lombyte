/*
STATE: C_EXACT
SYMBOL: FUN_00238520
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc-2.95.2 -O2 -g2
DECISION: promoted (pipeline-2026-09-08-3)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-08-3/refinement/FUN_00238520/attempt-2/finalist.json
NOTE: re-verified 100/100/100 fresh SN on 2026-09-08 resume; wrapper INCLUDE_ASM oracle replaced by matching C.
*/
#include "types.h"
struct M2c_D_001E63C0 {
    u8 pad_0[0x2C];
    s32 unk2C;
    u8 pad_30[0x14];
    s32 unk44;
};

extern u8 D_001E5FB8[];
extern struct M2c_D_001E63C0 D_001E63C0;
extern s32 func_001FB8F0();
extern s32 func_001FDD10();
extern s32 func_00213260();
extern s32 func_00237E90();
extern s32 func_00238310(s32, s32, s32, f32);
extern s32 strlen();
void FUN_00238520(void) {
    func_001FB8F0(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    if ((strlen(D_001E63C0.unk2C) - ((s32) D_001E63C0.unk44 / 20)) > 0) {
        D_001E63C0.unk44 = (s32) (D_001E63C0.unk44 + 2);
    } else {
        u8 *base_1e5fb8 = D_001E5FB8;
        func_00237E90(func_001FDD10(*(s32 *)(void *)((func_00213260(0x18) * 4) + base_1e5fb8)));
    }
    func_00238310(D_001E63C0.unk2C, -D_001E63C0.unk44, 8, 2.0f);
    func_001FB8F0(0, 0, 4, 0x40, 0x200, 0x80, 0);
    func_001FB8F0(0xE2, 0, 0xE6, 0x40, 0x200, 0x80, 0);
}
