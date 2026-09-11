/*
STATE: C_NON_MATCHING
SYMBOL: _ssp_load_tex
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `_ssp_load_tex` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022bec4/FUN_0022bec4.s", FUN_0022bec4);
#else
#include "rnc/assembly_textbin_fun_0022bec4_types.h"
#include "types.h"




extern s32 D_0015EE74;
extern s32 D_0015F458;
extern u8 D_0018D040[];
void FUN_0022bec4(struct M2c_arg5 *arg5) {
    s32 temp_6_10;
    u32 temp_1_14;
    u32 temp_2_13;
    u32 temp_3_16;
    u8 temp_4_19;
    u8 temp_5_21;
    struct M2c_temp_7_12 *temp_7_12;

    temp_6_10 = D_0015F458 * 0x10;
    D_0015F458 += 1;
    temp_7_12 = D_0018D040 + temp_6_10;
    temp_2_13 = (u32) D_0015EE74 >> 8;
    temp_1_14 = D_0015EE74 + 0x400;
    temp_7_12->unk6 = (s16) temp_2_13;
    temp_3_16 = temp_1_14 >> 8;
    temp_7_12->unkE = (s16) temp_3_16;
    temp_4_19 = arg5->unkC;
    temp_5_21 = arg5->unkE;
    temp_7_12->unkC = temp_4_19;
    temp_7_12->unkD = temp_5_21;
    temp_7_12->unk4 = 0;
    D_0015EE74 = temp_1_14 + ((1 << temp_4_19) << temp_5_21);
    temp_7_12->unk0 = (s32) ((arg5->unkA * 0x10) + 0 /*  Read from unset register $t1  */);
    temp_7_12->unk8 = (s32) ((arg5->unk8 * 0x10) + 0 /*  Read from unset register $t1  */);
    arg5->unk0 = (s64) (0 /*  unknown instruction: qmfc2.ni $a4, $vf20  */ | temp_3_16 | ((1 << 0 /*  unknown instruction: pmaxw $at, $at, $zero  */) << 0xE) | ((s64) temp_4_19 << 0x1A) | ((s64) temp_5_21 << 0x1E) | ((s64) temp_2_13 << 0x25));
}
#endif /* NON_MATCHING */
