#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00222768/FUN_00222768.s", FUN_00222768);
#else
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x18];
    s32 unk18;
    s32 unk1C;
    u8 pad_20[0x4];
    s32 unk24;
    u8 pad_28[0xC];
    s32 unk34;
    u8 pad_38[0x4];
    s32 unk3C;
    u8 pad_40[0x10];
    s32 unk50;
    s32 unk54;
};

extern void PackImageDescriptor();
extern void func_001F4280();
extern void func_001F4398();
extern void func_001F7580();
extern s32 func_001FDD10();
extern void func_00233980();
s32 FUN_00222768(struct M2c_arg0 *arg0) {    u16 spE;
    u8 sp_slot[0x70]; s16 sp12;
    s16 sp14;
    s16 sp16;
    s32 temp_3_68;
    s32 temp_9_36;
    s32 var_18_55;
    u16 var_16_63;
    u32 temp_10_32;
    func_00233980(0x47, 0x30000);
    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
    func_001F4280(0);
    PackImageDescriptor(sp_slot, arg0);
    temp_10_32 = arg0->unk50;
    temp_9_36 = temp_10_32 < 0x14U;
    sp12 = 9;
    sp14 = 0;
    sp16 = 0;
    if (temp_9_36 != 0) {
        switch (temp_10_32) {
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 12:
        case 13:
        case 14:
        case 16:
        case 17:
        case 18:
            var_18_55 = 0;
            var_16_63 = (s32) arg0->unk1C - (((s32) arg0->unk3C >> 4) - 4);
            if (*(s32 *)arg0->unk34 != -1) {
                do {
                    temp_3_68 = var_18_55 * 4;
                    var_18_55 += 1;
                    sp16 = (s16) ((u64) (u8) arg0->unk3C >> 4);
                    func_001F7580(sp_slot, (0x80FF << 0x10) | 0xA888, func_001FDD10(*(s32 *)(temp_3_68 + arg0->unk34), var_16_63), -1);
                    var_16_63 = var_16_63 + (s16) spE + 0xA;
                } while (*(s32 *)((var_18_55 * 4) + arg0->unk34) != -1);
            }
            if ((var_16_63 + 0x18) < ((s32) arg0->unk1C + (s32) arg0->unk24)) {
                arg0->unk54 = 1;
            }
            break;
        case 4:
        case 11:
        case 15:
        case 19:
            func_001F7580(sp_slot, (0x80FF << 0x10) | 0xA888, func_001FDD10(arg0->unk34, arg0->unk18, arg0->unk24, arg0->unk1C + 4, 9, temp_9_36, temp_10_32, arg0->unk1C + 0x20), -1);
            break;
        }
    }
    func_001F4398();
    return 2;
}

extern s32 func_00222768(struct M2c_arg0 *arg0) __attribute__((alias("FUN_00222768")));
#endif /* NON_MATCHING */
