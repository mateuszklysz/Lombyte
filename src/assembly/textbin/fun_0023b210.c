/*
STATE: C_NON_MATCHING
SYMBOL: setImageTag
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `setImageTag` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 27.4779%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023b210/FUN_0023b210.s", FUN_0023b210);
#else
#include "rnc/assembly_textbin_fun_0023b210_types.h"
#include "types.h"




extern u8 D_00151DF0[];
extern u32 D_0015EE84[];
extern u32 D_0015EEB8[];
void FUN_0023b210(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16_25;
    s32 temp_7_26;
    s32 var_4_39;
    s32 var_5_0;
    s32 var_8_35;
    struct M2c_var_10_38 *var_10_38;

    var_5_0 = arg1;
    arg0->unk10 = (s64) ((0x8000 << 0x2D) | 2);
    arg0->unk18 = 0xE;
    arg0->unk0 = 0x10000003;
    arg0->unk8 = 0;
    temp_16_25 = arg2 >> 4;
    temp_7_26 = arg3 >> 4;
    arg0->unk28 = 0x50;
    arg0->unk30 = (s64) ((0x8000 << 0x15) | 0x10);
    arg0->unk38 = 0x52;
    var_8_35 = 0;
    arg0->unk20 = (s64) ((((s64) D_0015EE84[0] >> 8) << 0x20) | (0x8000 << 0x24));
    var_10_38 = ((u8 *)arg0 + (0x40));
    if (temp_16_25 <= 0) {
        goto block_6;
    }
    var_4_39 = 0;
loop_2:
    if (temp_7_26 <= 0) {
        goto block_5;
    }
loop_4:
    var_10_38->unk54 = (s32) (var_5_0 & 0x0FFFFFFF);
    var_10_38->unk0 = 0x10000004;
    var_10_38->unk20 = (s64) (((var_8_35 * 0x10) << 0x20) | ((var_4_39 * 0x10) << 0x30));
    var_4_39 += 1;
    var_10_38->unk8 = 0;
    var_5_0 += 0x400;
    var_10_38->unk10 = (s64) ((0x8000 << 0x2D) | 2);
    var_10_38->unk18 = 0xE;
    var_10_38->unk28 = 0x51;
    var_10_38->unk30 = 0;
    var_10_38->unk38 = 0x53;
    var_10_38->unk40 = (s64) ((0x8000 << 0x2C) | 0x40);
    var_10_38->unk48 = 0;
    var_10_38->unk50 = 0x30000040;
    var_10_38->unk58 = 0;
    var_10_38 += 0x60;
    if (var_4_39 < temp_7_26) {
        goto loop_4;
    }
block_5:
    var_8_35 += 1;
    var_4_39 = 0;
    if (var_8_35 < temp_16_25) {
        goto loop_2;
    }
block_6:
    var_10_38->unk0 = 0x30000009;
    var_10_38->unkC = 0x50000009;
    var_10_38->unk4 = (s32) ((D_0015EEB8[0] + 0xC0) & 0x0FFFFFFF);
    var_10_38->unk8 = 0;
    var_10_38->unk10 = 0x30000025;
    var_10_38->unk14 = D_00151DF0;
    var_10_38->unk1C = 0x50000025;
    var_10_38->unk18 = 0;
    var_10_38->unk20 = 0x70000000;
    *(s32 *)((u8 *)(((u8 *)var_10_38 + (0x20))) + 0x8) = 0;
    return;
}
#endif /* NON_MATCHING */
