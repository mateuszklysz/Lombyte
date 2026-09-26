#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/menus/setup_menu_display_text/FUN_0021ef78.s", FUN_0021ef78);
#else
#include "types.h"

struct G_d_0013E500 {
    u8 pad_0[0x4];
    s32 unk4;
};

struct G_d_00186F40 {
    u8 pad_0[0x140];
    f32 unk140;
    f32 unk144;
    f32 unk148;
};

struct G_d_001A00F0 {
    u8 pad_0[0x224];
    s32 unk224;
};

struct G_vec3 {
    u8 pad_0[0x10];
    f32 unk10;
    f32 unk14;
    f32 unk18;
};

struct G_arg0 {
    u8 pad_0[0x20];
    s32 unk20;
    u8 pad_24[0x20];
    struct G_vec3 *unk44;
};

__asm__(".extern D_001602A4, 4");

extern s32 D_0013E500[];
extern s32 D_0014BEC0[];
extern f32 D_001602A4;
extern u8 D_001602A8[];
extern struct G_d_00186F40 D_00186F40;
extern s32 D_001A00F0[];
extern s32 D_001E0888[];
extern s32 func_001F4280();
extern void func_001F4398();
extern s32 func_001F6940();
extern s32 func_001FDD10();
extern void func_0020D330();
extern void sprintf();

s32 setup_menu_display_text(struct G_arg0 *arg0) __asm__("FUN_0021ef78");

s32 setup_menu_display_text(struct G_arg0 *arg0) {
    u8 sp_slot[0x100];
    struct G_vec3 *temp_3_17;
    s32 var_19_39;
    s32 var_5_44;
    u8 *var_4_46;
    s32 temp_18_62;
    s32 temp_2_80;

    temp_3_17 = arg0->unk44;
    temp_3_17->unk10 = D_00186F40.unk140 + 8.0f;
    temp_3_17->unk14 = D_00186F40.unk144 + D_001602A4;
    temp_3_17->unk18 = D_00186F40.unk148 - 0.1f;
    if (arg0->unk44 != 0) {
        func_0020D330(0, 1);
    }
    func_001F4280(0);
    var_19_39 = 0;
    var_5_44 = 3;
    var_4_46 = (u8 *)D_0014BEC0 + D_001A00F0[0x89] * 4;
    do {
        if (*var_4_46 != 0) {
            var_19_39++;
        }
        var_4_46 += 1;
        var_5_44 -= 1;
    } while (var_5_44 >= 0);
    sprintf(sp_slot, D_001602A8, func_001FDD10(0x4F4F), var_19_39, func_001FDD10(0x4F53), D_001E0888[D_001A00F0[0x89]]);
    func_001F6940(arg0->unk20 - 0x10, (D_0013E500[1] >> 1) - 8, (u64)0x80000000, sp_slot, -1);
    func_001F6940(arg0->unk20 - 0x11, (D_0013E500[1] >> 1) - 9, (u64)0x80FFA888, sp_slot, -1);
    func_001F4398();
    return 8;
}
#endif /* NON_MATCHING */
