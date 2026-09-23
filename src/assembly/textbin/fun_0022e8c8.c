#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022e8c8/FUN_0022e8c8.s", FUN_0022e8c8);
#else
#include "types.h"
extern s32 D_0015ED84[];
extern u8 D_001604F0[];
extern s32 D_00160580;
extern u8 D_001D97B0[];
extern u8 D_001D9A50[];
extern u8 D_001D9A90[];
extern s32 func_001F7D30();
extern s32 func_001F98D0();
extern s32 func_001F9A10();
extern s32 func_001F9A68();
extern void func_00233980(s32, s64);
void FUN_0022e8c8(void) {
u8 sp_slot[0x100];    s32 sp40;
    s32 sp50;
    s64 sp70;
    s64 sp78;
    s64 sp80;
    s64 sp88;
    s32 *var_20_46;
    f32 var_f20_16;
    s32 *var_17_49;
    s32 var_19_50;
    s32 *temp_4_59;
    s32 *temp_5_60;
    s32 *var_16_48;

    func_00233980(0x47, 0x31801);
    var_f20_16 = 1.0f;
    sp88 = (0x8000 << 0x18) | 0x44;
    sp78 = D_00160580;
    sp80 = (0xFF90 << 0x20) | 0x260;
    sp70 = 0;
    func_001F98D0(&sp50, D_001D97B0, 0x20);
    if ((u32) D_0015ED84[0] >= 0x13U) {
        goto block_2;
    }
    var_f20_16 = *((D_0015ED84[0] * 4) + D_001D9A90);
block_2:
    var_20_46 = D_001D9A50;
    var_16_48 = sp_slot;
    var_17_49 = &sp40;
    var_19_50 = 3;
loop_3:
    *var_17_49 = 0x80808080;
    func_001F9A68(var_16_48, var_20_46, var_f20_16);
    var_20_46 += 0x10;
    temp_4_59 = var_16_48;
    temp_5_60 = var_16_48;
    var_16_48 += 0x10;
    func_001F9A10(temp_4_59, temp_5_60, D_001604F0);
    var_19_50 -= 1;
    var_17_49 += 4;
    if (var_19_50 >= 0) {
        goto loop_3;
    }
    func_001F7D30(sp_slot, 0, 0);
    func_00233980(0x47, 0x5360B);
    return;
}
#endif /* NON_MATCHING */
