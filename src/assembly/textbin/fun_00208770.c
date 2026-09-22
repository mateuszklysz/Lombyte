#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00208770/FUN_00208770.s", FUN_00208770);
#else
#include "rnc/assembly_textbin_fun_00208770_types.h"
#include "types.h"




extern u8 D_0013D5B0[];
extern s32 D_0015ED84[];
extern u8 D_00199478[];
extern u8 D_001E03B8[];
void FUN_00208770(void) {
    s32 temp_6_15;
    s32 temp_7_14;
    s32 var_6_26;
    void **var_5_25;
    struct M2c_temp_2_28 *temp_2_28;
    struct M2c_var_4_24 *var_4_24;

    if ((u32) D_0015ED84[0] >= 0x13U) {
        goto block_6;
    }
    temp_7_14 = *(((D_0015ED84[0] + 1) * 4) + D_001E03B8);
    temp_6_15 = *((D_0015ED84[0] * 4) + D_001E03B8);
    if (temp_6_15 >= temp_7_14) {
        goto block_6;
    }
    var_4_24 = (temp_6_15 * 0x10) + D_0013D5B0;
    var_5_25 = (temp_6_15 * 4) + D_00199478;
    var_6_26 = temp_7_14 - temp_6_15;
loop_3:
    temp_2_28 = *var_5_25;
    if (temp_2_28 == NULL) {
        goto block_5;
    }
    var_4_24->unk0 = (f32) temp_2_28->unk10;
    var_4_24->unk4 = (f32) temp_2_28->unk14;
    var_4_24->unk8 = (f32) temp_2_28->unk48;
block_5:
    var_4_24 += 0x10;
    var_6_26 -= 1;
    var_5_25 += 4;
    if (var_6_26 != 0) {
        goto loop_3;
    }
block_6:
    return;
}

extern void func_00208770(void) __attribute__((alias("FUN_00208770")));
#endif /* NON_MATCHING */
