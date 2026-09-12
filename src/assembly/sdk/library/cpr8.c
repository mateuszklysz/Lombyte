/*
STATE: C_NON_MATCHING
SYMBOL: _cpr8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _cpr8; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/cpr8/_cpr8.s", _cpr8);
#else
#include "rnc/assembly_sdk_library_cpr8_types.h"
#include "types.h"






extern s32 DIntr();
extern s32 EnableInterrupts();
void _cpr8(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
    struct M2c_sp0 *sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_2_106;
    s32 temp_2_73;
    s32 temp_4_27;
    s32 var_16_70;
    s32 var_17_68;
    s32 var_18_22;
    s32 var_20_40;
    s32 var_21_38;
    s32 var_23_71;
    s32 var_30_43;
    s32 var_3_29;
    s32 var_5_64;

    sp0 = arg0;
    var_18_22 = arg1->unk0 & 0x0FFFFFFF;
    sp8 = arg0->unkD8 & 0x0FFFFFFF;
    if (sp0->unk174 == 3) {
        goto block_3;
    }
    temp_4_27 = sp0->unkE0;
    var_3_29 = temp_4_27;
    if (temp_4_27 != 0) {
        goto block_8;
    }
    goto block_4;
block_3:
    var_3_29 = sp0->unkE0;
block_4:
    var_21_38 = arg1->unk10 * 0x180;
    var_20_40 = var_21_38 >> 4;
    if (var_3_29 == 0) {
        goto block_6;
    }
    var_30_43 = (var_3_29 >> 4) * 0x180;
    goto block_7;
block_6:
    var_30_43 = var_21_38;
block_7:
    sp4 = 1;
    goto block_9;
block_8:
    var_30_43 = (temp_4_27 >> 4) * 0xC0;
    var_21_38 = ((s32) arg1->unk10 >> 1) * 0x180;
    sp4 = 2;
    var_20_40 = var_21_38 >> 4;
block_9:
    var_5_64 = 0;
    if (sp4 == 0) {
        goto block_27;
    }
loop_11:
    var_17_68 = sp8;
    var_16_70 = 0;
    if (arg1->unkC <= 0) {
        goto block_25;
    }
    var_23_71 = var_5_64 + 1;
loop_13:
    temp_2_73 = DIntr();
    *(s32 *)0x1000D480 = 0;
    *(s32 *)0x1000D410 = var_18_22;
    *(s32 *)0x1000D420 = var_20_40;
    *(s32 *)0x1000D400 = 0x101;
    if (temp_2_73 == 0) {
        goto block_15;
    }
    EnableInterrupts(0x1000D420, 0x1000D400);
block_15:
    var_16_70 += 1;
loop_16:
    if (*(volatile u32 *)0x1000D400 & 0x100) {
        goto loop_16;
    }
    temp_2_106 = DIntr();
    *(s32 *)0x1000D080 = 0;
    *(s32 *)0x1000D010 = var_17_68;
    *(s32 *)0x1000D020 = var_20_40;
    *(s32 *)0x1000D000 = 0x100;
    if (temp_2_106 == 0) {
        goto block_19;
    }
    EnableInterrupts(0x1000D020, 0x1000D000);
block_19:
loop_20:
    if (*(volatile u32 *)0x1000D000 & 0x100) {
        goto loop_20;
    }
loop_22:
    if (*(volatile u32 *)0x1000D020 != 0) {
        goto loop_22;
    }
    var_17_68 += var_30_43;
    var_18_22 += var_21_38;
    if (var_16_70 < arg1->unkC) {
        goto loop_13;
    }
    goto block_26;
block_25:
    var_23_71 = var_5_64 + 1;
block_26:
    var_5_64 = var_23_71;
    sp8 += sp0->unkE4 * 0xC0;
    if (var_5_64 < sp4) {
        goto loop_11;
    }
block_27:
    return;
}
#endif /* NON_MATCHING */
