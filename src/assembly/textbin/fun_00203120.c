#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00203120/FUN_00203120.s", FUN_00203120);
#else
#include "rnc/assembly_textbin_fun_00203120_types.h"
#include "types.h"


extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern s32 D_0015EE8C;
extern s32 FlushCache();
extern s32 func_00120558();
extern s32 sceGsExecLoadImage();
extern s32 sceGsSetDefLoadImage();
void FUN_00203120(s32 arg0, s32 arg1, s32 *arg2) {
u8 sp_slot[0xF0];    s16 temp_16_34;
    s32 temp_17_32;
    s32 temp_20_28;
    s32 temp_2_27;
    s32 temp_3_31;
    s32 temp_3_47;
    s32 temp_6_36;
    s32 var_19_21;
    s32 var_3_72;
    struct M2c_var_18_10 *var_18_10;

    var_18_10 = arg2;
    D_0015EE78 = D_0015EE8C;
    D_0015EE74 = D_0015EE8C;
    if (arg1 <= 0) {
        goto block_10;
    }
    var_19_21 = arg1;
loop_2:
    temp_2_27 = var_18_10->unk4;
    temp_20_28 = arg0 + var_18_10->unkC;
    temp_3_31 = var_18_10->unk0;
    temp_17_32 = temp_2_27 >> 0x10;
    temp_16_34 = temp_2_27 & 0xFFFF;
    if (temp_3_31 != 0x13) {
        goto block_4;
    }
    temp_6_36 = temp_16_34 >> 6;
    sceGsSetDefLoadImage(sp_slot, (s32) (D_0015EE74 << 8) >> 0x10, (temp_6_36 == 0) ? 1 : temp_6_36, 0x13, 0, 0, temp_16_34, temp_17_32);
    temp_3_47 = temp_16_34 * temp_17_32;
    D_0015EE74 += (temp_3_47 <= 0xFF) ? 0x100 : temp_3_47;
    goto block_9;
block_4:
    if (temp_3_31 != 2) {
        goto block_6;
    }
    sceGsSetDefLoadImage(sp_slot, (s32) (D_0015EE74 << 8) >> 0x10, 1, 2, 0, 0, 0x10, 0x10);
    var_3_72 = D_0015EE74 + 0x200;
    goto block_8;
block_6:
    if (temp_3_31 != 0) {
        goto block_9;
    }
    sceGsSetDefLoadImage(sp_slot, (s32) (D_0015EE74 << 8) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
    var_3_72 = D_0015EE74 + 0x400;
block_8:
    D_0015EE74 = var_3_72;
block_9:
    var_19_21 -= 1;
    FlushCache(0);
    var_18_10 += 1;
    sceGsExecLoadImage(sp_slot, temp_20_28);
    func_00120558(0, 0);
    if (var_19_21 != 0) {
        goto loop_2;
    }
block_10:
    D_0015EE78 = D_0015EE74;
    return;
}
#endif /* NON_MATCHING */
