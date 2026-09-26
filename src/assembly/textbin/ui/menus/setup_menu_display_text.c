#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/menus/setup_menu_display_text/FUN_0021ef78.s", FUN_0021ef78);
#else
#include "types.h"
struct M2c_D_0013E500 {
    u8 pad_0[0x4];
    s32 unk4;
};

struct M2c_D_00186F40 {
    u8 pad_0[0x140];
    s32 unk140;
    s32 unk144;
    s32 unk148;
};

struct M2c_D_001A00F0 {
    u8 pad_0[0x224];
    s32 unk224;
};

struct M2c_arg0 {
    u8 pad_0[0x20];
    s32 unk20;
    u8 pad_24[0x20];
    u8 * unk44;
};

struct M2c_temp_3_17 {
    u8 pad_0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

extern struct M2c_D_0013E500 D_0013E500;
extern u8 D_0014BEC0[];
extern s32 D_001602A4;
extern u8 D_001602A8[];
extern struct M2c_D_00186F40 D_00186F40;
extern struct M2c_D_001A00F0 D_001A00F0;
extern u8 D_001E0888[];
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F6940();
extern s32 func_001FDD10();
extern s32 func_0020D330();
extern s32 sprintf();
s32 FUN_0021ef78(struct M2c_arg0 *arg0) {
u8 sp_slot[0x170];    s32 temp_18_62;
    s32 var_19_39;
    s32 var_5_44;
    u8 *var_4_46;
    u8 temp_3_49;
    struct M2c_temp_3_17 *temp_3_17;
    register s32 * temp_4_30 asm("v1");

    temp_3_17 = arg0->unk44;
    temp_3_17->unk10 = (f32) (D_00186F40.unk140 + 8.0f);
    temp_3_17->unk14 = (f32) (D_00186F40.unk144 + *(s32 *)0x1602A4);
    temp_3_17->unk18 = (f32) (D_00186F40.unk148 - 0.1f);
    temp_4_30 = arg0->unk44;
    if (temp_4_30 != NULL) {
        func_0020D330(temp_4_30, 1);
    }
    func_001F4280(0);
    var_19_39 = 0;
    var_5_44 = 3;
    var_4_46 = (D_001A00F0.unk224 * 4) + D_0014BEC0;
    do {
        temp_3_49 = *var_4_46;
        var_4_46 += 1;
        var_5_44 -= 1;
        var_19_39 = (temp_3_49 != 0) ? (var_19_39 + 1) : var_19_39;
    } while (var_5_44 >= 0);
    temp_18_62 = func_001FDD10(0x4F4F, var_5_44);
    sprintf(sp_slot, D_001602A8, temp_18_62, var_19_39, func_001FDD10(0x4F53), *((D_001A00F0.unk224 * 4) + D_001E0888));
    func_001F6940(arg0->unk20 - 0x10, ((s32) D_0013E500.unk4 >> 1) - 8, 0x8000 << 0x10, sp_slot, -1);
    func_001F6940(arg0->unk20 - 0x11, ((s32) D_0013E500.unk4 >> 1) - 9, (0x80FF << 0x10) | 0xA888, sp_slot, -1);
    func_001F4398();
    return 8;
}
#endif /* NON_MATCHING */
