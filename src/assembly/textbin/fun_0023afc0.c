/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0023afc0
SCORE: code=68.1361 functions=68.1361 data=100 complete_data=100
DECISION: retained
BLOCKER: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023afc0/FUN_0023afc0.s", FUN_0023afc0);
#else
#include "rnc/assembly_textbin_fun_0023afc0_types.h"
#include "types.h"




extern struct M2c_D_001612BC *D_001612BC;
extern s32 func_0012F178();
extern s32 func_0023AF18();
void FUN_0023afc0(struct M2c_arg0 *arg0) {
    s32 temp_10_97;
    s32 temp_2_134;
    s32 temp_3_10;
    s32 temp_3_61;
    s32 temp_4_138;
    s32 temp_5_147;
    s32 temp_6_143;
    s32 temp_9_60;
    s32 var_2_17;
    s32 var_3_81;
    s32 var_6_55;
    s32 var_8_12;
    s32 var_8_62;
    u8 *var_5_77;
    u8 *var_7_72;
    u8 temp_2_83;

    temp_3_10 = arg0->unk0;
    var_8_12 = 0;
    if (temp_3_10 == 2) {
        goto block_8;
    }
    if (temp_3_10 >= 3) {
        goto block_4;
    }
    var_2_17 = 0 < 0x400;
    if (temp_3_10 == 1) {
        goto block_6;
    }
    goto block_10;
block_4:
    var_2_17 = 0 < 0x400;
    if (temp_3_10 == 3) {
        goto block_24;
    }
    goto block_10;
block_6:
    if (arg0->unk3C < 0x1000) {
        goto block_25;
    }
    var_8_12 = 0x1000 - arg0->unk50;
    goto block_9;
block_8:
    var_8_12 = (func_0012F178(0) - arg0->unk60) & 0xFFF;
block_9:
    var_2_17 = var_8_12 < 0x400;
block_10:
    if (var_2_17 != 0) {
        goto block_25;
    }
    if (arg0->unk3C < (arg0->unk18 << 0xA)) {
        goto block_26;
    }
loop_12:
    var_6_55 = 0;
    if (arg0->unk18 <= 0) {
        goto block_22;
    }
loop_13:
    temp_9_60 = var_6_55 << 0xC;
    temp_3_61 = arg0->unk40;
    var_8_62 = 0;
    var_7_72 = D_001612BC;
    var_5_77 = arg0->unk34 + ((s32) ((arg0->unk38 - arg0->unk3C) + temp_3_61) % temp_3_61) + (var_6_55 * arg0->unk1C);
loop_14:
    var_3_81 = 0;
    if (arg0->unk1C <= 0) {
        goto block_16;
    }
loop_15:
    temp_2_83 = *var_5_77;
    var_3_81 += 1;
    var_5_77 += 1;
    var_8_62 += 1;
    *var_7_72 = temp_2_83;
    var_7_72 += 1;
    if (var_3_81 < arg0->unk1C) {
        goto loop_15;
    }
block_16:
    temp_10_97 = arg0->unk1C * (arg0->unk18 - 1);
    var_5_77 += temp_10_97;
    if (var_8_62 < 0x400) {
        goto loop_14;
    }
    if ((arg0->unk60 + 0x400) != 0x1000) {
        goto block_19;
    }
    D_001612BC->unk3F1 = 3;
block_19:
    if (arg0->unk60 != 0) {
        goto block_21;
    }
    D_001612BC->unk11 = 2;
    D_001612BC->unk1 = 6;
block_21:
    func_0023AF18(arg0, D_001612BC, 0x400, temp_9_60 + arg0->unk60, var_8_62, temp_9_60, temp_10_97);
    var_6_55 += 1;
    if (var_6_55 < arg0->unk18) {
        goto loop_13;
    }
block_22:
    temp_2_134 = arg0->unk60;
    var_8_12 -= 0x400;
    temp_4_138 = temp_2_134 + 0x400;
    temp_6_143 = arg0->unk18 << 0xA;
    temp_5_147 = arg0->unk3C - temp_6_143;
    arg0->unk60 = (s32) (temp_4_138 - (((s32) ((temp_4_138 > -1) ? temp_4_138 : (temp_2_134 + 0x13FF)) >> 0xC) << 0xC));
    arg0->unk50 = (s32) (arg0->unk50 + 0x400);
    arg0->unk3C = temp_5_147;
    if (var_8_12 < 0x400) {
        goto block_24;
    }
    if (temp_5_147 >= temp_6_143) {
        goto loop_12;
    }
block_24:
block_25:
block_26:
    return;
}
#endif /* NON_MATCHING */
