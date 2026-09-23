#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022b288/FUN_0022b288.s", FUN_0022b288);
#else
#include "types.h"
#include "eetypes.h"
struct M2c_D_0016045C {
    u8 pad_0[0x4];
    u16 unk4;
    s16 unk6;
    u8 pad_8[0x2];
};

struct M2c_D_001D96E0 {
    u8 pad_0[0x30];
    s64 unk30;
};

extern s32 D_0015EE88;
extern s32 D_00160404;
extern struct M2c_D_0016045C *D_0016045C;
extern s32 D_00160460;
extern struct M2c_D_001D96E0 D_001D96E0;
extern void func_001F99F8();
extern void func_001F9A80();
extern void func_001F9FC8();
extern void func_001FA070();
extern s32 func_001FA580();
extern void func_0022B4C8();
extern void func_0022B558();
extern void func_0022B690();
extern void func_00233980();
extern void jtbl_001E8910();
void FUN_0022b288(void) {    s32 sp4;
    u8 sp_slot[0x60];
    f32 sp8;
    s32 *temp_4_113;
    s32 *temp_4_117;
    s32 var_f20_27;
    u32 var_f0_46;
    s32 temp_4_34;
    u32 var_17_7;
    var_17_7 = 0;
    func_0022B4C8();
    D_0016045C->unk4 = 0;
    func_001F9FC8(&D_001D96E0);
    func_001F99F8(sp_slot);
    if (D_0016045C->unk6 > 0) {
        do {
            var_f20_27 = 0x3F800000;
            if (var_17_7 < 6U) {
                temp_4_34 = *(s32 *)((var_17_7 * 4) + &jtbl_001E8910);
                switch (var_17_7) {
                case 0:
                    sp4 = 0;
                    sp8 = D_00160404;
                    /* fallthrough */
                case 1:
                    sp4 = 0;
                    var_f20_27 = 0x3F800000;
                    var_f0_46 = func_001FA580(temp_4_34, D_00160404, sp4);
                    break;
                case 2:
                    sp4 = 0xBD99999A;
                    var_f0_46 = func_001FA580(temp_4_34, D_00160404, 0xBE19999A);
                    var_f20_27 = 0x3FA00000;
                    break;
                case 3:
                    sp4 = 0x3D4CCCCD;
                    var_f0_46 = func_001FA580(temp_4_34, D_00160404, 0x3E000000);
                    var_f20_27 = 0x3FC00000;
                    break;
                case 4:
                    sp4 = 0x3DCCCCCD;
                    var_f0_46 = func_001FA580(temp_4_34, D_00160404, 0xBD4CCCCD);
                    var_f20_27 = 0x3FE00000;
                    break;
                case 5:
                    sp4 = 0xBE19999A;
                    var_f0_46 = func_001FA580(temp_4_34, D_00160404, 0x3DCCCCCD);
                    var_f20_27 = 0x40000000;
                    break;
                }
                sp8 = var_f0_46;
            }
            func_001FA070(&D_001D96E0, sp_slot);
            func_001F9A80(&D_001D96E0, &D_001D96E0, var_f20_27);
            temp_4_113 = ((u8 *)&D_001D96E0) + 0x10;
            func_001F9A80(temp_4_113, temp_4_113, var_f20_27);
            temp_4_117 = ((u8 *)&D_001D96E0) + 0x20;
            func_001F9A80(temp_4_117, temp_4_117, var_f20_27);
            D_001D96E0.unk30 = (s64) *(s32 *)0x160460;
            func_0022B690(var_17_7);
            var_17_7 += 1;
        } while ((s32) var_17_7 < D_0016045C->unk6);
    }
    func_0022B558();
    func_00233980(0x47, 0x5360B);
    func_00233980(0x4E, 0x01000000 | ((s32) *(s32 *)0x15EE88 >> 0xD));
}

extern void func_0022B288(void) __attribute__((alias("FUN_0022b288")));
#endif /* NON_MATCHING */
