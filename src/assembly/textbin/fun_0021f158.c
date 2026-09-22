#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021f158/FUN_0021f158.s", FUN_0021f158);
#else
#include "rnc/assembly_textbin_fun_0021f158_types.h"
#include "types.h"






extern u8 D_0013D428[];
extern u8 D_0013D4C0[];
extern u8 D_001602A0[];
extern u8 D_001602B8[];
extern u8 D_001602C0[];
extern u8 D_001602D0[];
extern struct M2c_D_001D5BF4 *D_001D5BF4[];
extern u8 D_001DFFB0[];
extern s32 PackImageDescriptor();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F7580();
extern s32 func_001FDD10();
extern void func_00233980();
extern s32 sprintf();
s32 FUN_0021f158(s32 arg0) {
u8 sp_slot[0xC0];    s32 sp50;
    s16 sp60;
    s16 sp62;
    s16 temp_4_20;
    s32 temp_17_38;
    s32 var_2_59;
    u16 temp_18_40;
    struct M2c_temp_16_37 *temp_16_37;
    struct M2c_temp_3_15 *temp_3_15;
    s32 *temp_4_77;

    temp_3_15 = D_001D5BF4[0]->unk40;
    temp_4_20 = *(s32 *)((u8 *)((temp_3_15->unk3C * 0xA) + temp_3_15->unk48) + 0x6);
    if (*(temp_4_20 + D_0013D4C0) == 0) {
        return 0;
    }
    temp_16_37 = (temp_4_20 * 0x18) + D_001DFFB0;
    temp_17_38 = *((temp_4_20 * 4) + D_0013D428);
    temp_18_40 = temp_16_37->unkE;
    func_00233980(0x42, 0x44, D_001DFFB0, 0xA);
    func_00233980(0x47, 0xB);
    if (temp_16_37->unk8 == 0) {
        sprintf(sp_slot, func_001FDD10(0x4F52));
    } else {
        if (temp_17_38 < 0x3E8) {
            var_2_59 = sprintf(sp_slot, D_001602B8, temp_17_38);
    __asm__ volatile ("" : "+r" (var_2_59));
        } else {
            var_2_59 = sprintf(sp_slot, D_001602C0, temp_17_38 / 1000, temp_17_38 % 1000);
    __asm__ volatile ("" : "+r" (var_2_59));
        }
        temp_4_77 = sp_slot + var_2_59;
        if ((s32) temp_18_40 < 0x3E8) {
            sprintf(temp_4_77, D_001602A0, (s32) temp_18_40);
        } else {
            sprintf(temp_4_77, D_001602D0, (s32) temp_18_40 / 1000, (s32) temp_18_40 % 1000);
        }
    }
    func_001F4280(0);
    PackImageDescriptor(&sp50, arg0);
    sp60 = 0x10;
    sp62 = 3;
    func_001F7580(&sp50, (0x80FF << 0x10) | 0xA888, sp_slot, -1);
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
