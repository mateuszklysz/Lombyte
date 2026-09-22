#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022de10/FUN_0022de10.s", FUN_0022de10);
#else
#include "rnc/assembly_textbin_fun_0022de10_types.h"
#include "types.h"








extern u8 D_0015EDB4;
extern u8 D_00187080[];
extern struct M2c_D_0018CB20 D_0018CB20;
extern u8 D_0018CDB0[];
extern s32 SceVu0RotMatrixX();
extern s32 SceVu0RotMatrixY();
extern s32 func_001F2D98();
extern s32 func_001F9AD8();
extern s32 sceVu0RotMatrixZ();
extern s32 sceVu0UnitMatrix();
u8 FUN_0022de10(void) {    s32 sp0;
u8 sp_slot[0x90];    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp4;
    s32 sp8;
    struct M2c_temp_2_40 *temp_2_40;
    u8 temp_19_17;
    struct M2c_temp_16_15 *temp_16_15;
    struct M2c_temp_17_16 *temp_17_16;

    temp_16_15 = D_0018CB20.unk54 + (D_0018CB20.unk38 << 5);
    temp_17_16 = ((u8 *)temp_16_15 + (0x10));
    temp_19_17 = temp_16_15->unkC;
    *(s32 *)D_0018CDB0 = temp_17_16->unkC;
    func_001F2D98(D_0018CDB0);
    *(s32 *)D_00187080 = temp_16_15->unk0;
    sceVu0UnitMatrix(sp_slot);
    SceVu0RotMatrixX(sp_slot, sp_slot, temp_16_15->unk10);
    SceVu0RotMatrixY(sp_slot, sp_slot, temp_17_16->unk4);
    sceVu0RotMatrixZ(sp_slot, sp_slot, temp_17_16->unk8);
    temp_2_40 = ((u8 *)D_00187080 - (u8 *)0x140);
    temp_2_40->unk378 = sp18;
    temp_2_40->unk350 = (f32) -sp20;
    temp_2_40->unk360 = (f32) -sp0;
    temp_2_40->unk370 = sp10;
    temp_2_40->unk354 = (f32) -sp24;
    temp_2_40->unk364 = (f32) -sp4;
    temp_2_40->unk374 = sp14;
    temp_2_40->unk358 = (f32) -sp28;
    temp_2_40->unk368 = (f32) -sp8;
    if (D_0015EDB4 != 0) {
        func_001F9AD8(D_00187080 + 0x220, D_00187080 + 0x230, D_00187080 + 0x210);
    }
    return temp_19_17;
}
#endif /* NON_MATCHING */
