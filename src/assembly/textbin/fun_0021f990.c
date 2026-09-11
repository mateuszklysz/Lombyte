/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021f990
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 66.0879%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021f990/FUN_0021f990.s", FUN_0021f990);
#else
#include "rnc/assembly_textbin_fun_0021f990_types.h"
#include "types.h"




















extern struct M2c_D_0013D290 D_0013D290;
extern s32 D_001516D8;
extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 D_001A0314;
extern struct M2c_D_001D5BF4 *D_001D5BF4;
extern s32 func_001F97A0();
extern s32 func_00204E30();
extern s32 func_0020B4A8();
extern s32 func_0020B618();
extern s32 func_00216788();
extern s32 func_00225D88();
extern s32 func_00225DD8();
extern s32 func_00225E20();
s32 FUN_0021f990(struct M2c_arg0 *arg0, s32 *arg1, s32 arg2, s32 *arg3, s32 arg4) {
    struct M2c_var_5_0 *var_5_0;
    s32 *var_7_0;
    s32 temp_16_48;
    s32 temp_16_50;
    s32 temp_16_76;
    s32 temp_18_109;
    s32 temp_18_180;
    s32 temp_2_124;
    s32 temp_3_13;
    s32 temp_3_80;
    s32 var_16_17;
    s32 var_2_135;
    s32 var_2_147;
    s32 var_6_0;
    s32 var_8_0;
    struct M2c_temp_16_172 *temp_16_172;
    struct M2c_temp_2_133 *temp_2_133;
    struct M2c_temp_2_141 *temp_2_141;
    s32 *temp_4_102;
    s32 *temp_4_166;
    s32 *var_17_117;

    var_5_0 = arg1;
    var_6_0 = arg2;
    var_7_0 = arg3;
    var_8_0 = arg4;
    temp_3_13 = arg0->unk34;
    if (!(temp_3_13 & 1)) {
        goto block_3;
    }
    var_16_17 = arg0->unk58;
    if (var_16_17 != -1) {
        goto block_16;
    }
    goto block_39;
block_3:
    if (!(temp_3_13 & 2)) {
        goto block_5;
    }
    var_16_17 = D_001A0314;
    goto block_16;
block_5:
    if (!(temp_3_13 & 4)) {
        goto block_7;
    }
    var_16_17 = D_001D5BF4->unk40->unk3C;
    goto block_16;
block_7:
    if (!(temp_3_13 & 0x100)) {
        goto block_15;
    }
    var_5_0 = D_001D5BF4;
    var_7_0 = &D_0013D290;
    var_8_0 = -1;
    var_6_0 = 4;
    temp_16_48 = var_5_0->unk40->unk40;
    temp_16_50 = (temp_16_48 <= -1) ? 0 : temp_16_48;
    var_16_17 = (temp_16_50 >= 5) ? 4 : temp_16_50;
    if (D_0013D290.unkD4 >= 3) {
        goto block_13;
    }
    if (D_0013D290.unkDC >= 0) {
        goto block_14;
    }
    if (arg0->unk44 != -1) {
        goto block_12;
    }
    arg0->unk60 = 0;
block_12:
    var_16_17 = *(s32 *)((u8 *)((var_16_17 * 0x1C) + &D_0013D290) + 0x20);
    goto block_16;
block_13:
block_14:
    arg0->unk44 = -1;
    goto block_16;
block_15:
    var_5_0 = &D_001D5BF4;
    temp_16_76 = D_001D5BF4->unk40->unk40;
    var_16_17 = (temp_16_76 <= -1) ? 0 : temp_16_76;
block_16:
    temp_3_80 = arg0->unk44;
    if (temp_3_80 == 1) {
        goto block_34;
    }
    if (temp_3_80 >= 2) {
        goto block_20;
    }
    if (temp_3_80 == 0) {
        goto block_23;
    }
    return 0;
block_20:
    if (temp_3_80 == 2) {
        goto block_23;
    }
    if (temp_3_80 == 3) {
        goto block_34;
    }
    return 0;
block_23:
    if (var_16_17 == arg0->unk50) {
        goto block_40;
    }
    temp_4_102 = arg0->unk48;
    if (temp_4_102 == NULL) {
        goto block_39;
    }
    if (D_001516D8 != 0) {
        goto block_40;
    }
    temp_18_109 = var_16_17 * 8;
    if (*(s32 *)((u8 *)(temp_18_109 + arg0->unk30) + 0x4) == 0) {
        goto block_40;
    }
    var_17_117 = temp_4_102;
    if (!(arg0->unk34 & 0x20)) {
        goto block_29;
    }
    temp_2_124 = func_00225D88(temp_4_102, var_5_0, var_6_0, var_7_0, var_8_0) - (*(s32 *)((u8 *)(temp_18_109 + arg0->unk30) + 0x4) << 0xB);
    arg0->unk60 = temp_2_124;
    var_17_117 += temp_2_124;
block_29:
    if (!(arg0->unk34 & 0x10)) {
        goto block_31;
    }
    temp_2_133 = temp_18_109 + arg0->unk30;
    var_2_135 = func_00216788(var_17_117, temp_2_133->unk0, temp_2_133->unk4);
    goto block_32;
block_31:
    temp_2_141 = temp_18_109 + arg0->unk30;
    var_2_135 = func_00216788(var_17_117, temp_2_141->unk0, temp_2_141->unk4);
block_32:
    var_2_147 = -1;
    if (var_2_135 == 0) {
        goto block_38;
    }
    func_00225DD8(arg0->unk48);
    arg0->unk50 = var_16_17;
    arg0->unk44 = (s32) (arg0->unk44 + 1);
    goto block_39;
block_34:
    if (D_001516D8 != 0) {
        goto block_40;
    }
    func_00225E20(arg0->unk48, var_5_0, var_6_0, var_7_0, var_8_0);
    if (!(arg0->unk34 & 0x20)) {
        goto block_37;
    }
    temp_4_166 = arg0->unk48;
    func_0020B618(temp_4_166 + arg0->unk60, temp_4_166);
    arg0->unk44 = 0;
block_37:
    temp_16_172 = arg0->unk48;
    temp_18_180 = func_001F97A0(temp_16_172->unk8);
    D_001A00F0.unk258 = func_00204E30(temp_18_180, func_001F97A0(temp_16_172->unkC), ((u8 *)temp_16_172 + (0x20)), ((u8 *)temp_16_172 + (0x420)), D_001A00F0.unk244, D_001A00F0.unk248);
    func_0020B4A8();
    var_2_147 = 2;
block_38:
    arg0->unk44 = var_2_147;
block_39:
block_40:
    return 0;
}
#endif /* NON_MATCHING */
