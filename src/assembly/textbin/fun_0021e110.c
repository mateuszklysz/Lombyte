#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021e110/FUN_0021e110.s", FUN_0021e110);
#else
#include "rnc/assembly_textbin_fun_0021e110_types.h"
#include "types.h"






extern u8 D_0013D4C0[];
extern struct M2c_D_001D5BF4 *D_001D5BF4;
extern s32 PackImageDescriptor();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F7580();
extern s32 func_001FDD10();
extern s32 func_0020D330();
s32 FUN_0021e110(struct M2c_arg0 *arg0) {
u8 sp_slot[0x40];    s32 temp_4_21;
    s32 temp_4_29;
    s32 var_2_31;
    struct M2c_temp_2_12 *temp_2_12;

    temp_2_12 = D_001D5BF4->unk40;
    if (*(*(s16 *)((u8 *)((temp_2_12->unk3C * 0xA) + temp_2_12->unk48) + 0x6) + D_0013D4C0) == 0) {
        goto block_2;
    }
    temp_4_21 = arg0->unk44;
    goto block_4;
block_2:
    return 0;
block_4:
    if (temp_4_21 == 0) {
        goto block_7;
    }
    func_0020D330(temp_4_21, 1, D_001D5BF4, 0xA);
    temp_4_29 = arg0->unk48;
    var_2_31 = 8;
    if (temp_4_29 == 0) {
        goto block_8;
    }
    func_0020D330(temp_4_29, 1);
    return 8;
block_7:
    func_001F4280(0, D_0013D4C0, D_001D5BF4, 0xA);
    PackImageDescriptor(sp_slot, arg0);
    func_001F7580(sp_slot, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4F4D, 0x10, 3), -1);
    func_001F4398();
    var_2_31 = 2;
block_8:
    return var_2_31;
}
#endif /* NON_MATCHING */
