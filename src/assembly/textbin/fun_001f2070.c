#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f2070/FUN_001f2070.s", FUN_001f2070);
#else
#include "rnc/assembly_textbin_fun_001f2070_types.h"
#include "types.h"




extern struct M2c_D_00186F40 D_00186F40;
extern s32 D_0018CF10;
extern s32 func_001F9A68();
extern s32 func_001F9D20();
extern s32 func_001F9FC8();
extern s32 func_001FA378();
extern void sp90();
void FUN_001f2070(struct M2c_arg0 *arg0, s32 arg1) {    s32 sp98;
u8 sp_slot[0x100];    s32 sp9C;
    s32 sp40;
    s32 sp80;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 temp_f0_67;
    f32 temp_f2_51;
    f32 temp_f3_69;

    func_001F9FC8(sp_slot);
    func_001FA378(&sp40, ((u8 *)&D_00186F40 + 0x40, sp_slot, -D_00186F40.unk140 * 1024.0f, -D_00186F40.unk144 * 1024.0f, -D_00186F40.unk148 * 1024.0f));
    func_001F9A68(&sp80, arg1, 0x44800000);
    sp8C = 1.0f;
    func_001F9D20(&sp90, &sp80, &sp40);
    temp_f2_51 = D_0018CF10 / sp9C;
    arg0->unk8 = (f32) (sp98 * 0.0009765625f);
    temp_f0_67 = (sp94 * temp_f2_51) + 2048.0f;
    temp_f3_69 = (sp90 * temp_f2_51) + 2048.0f;
    sp94 = temp_f0_67;
    sp90 = temp_f3_69;
    arg0->unk4 = (f32) (temp_f0_67 * 16.0f);
    arg0->unk0 = (f32) (temp_f3_69 * 16.0f);
}
#endif /* NON_MATCHING */
