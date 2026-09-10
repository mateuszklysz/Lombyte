/* ROLE: recovered whole function `mode_freezeInit` (game/freeze.cpp). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 56.9902%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/mode_freeze_init/FUN_001fbab8.s", FUN_001fbab8);
#else
#include "rnc/assembly_textbin_fun_001fbab8_types.h"
#include "types.h"










extern u32 D_0015F604[];
extern struct M2c_D_00193300 D_00193300;
extern s32 func_0012E3E8();
extern s32 func_001F96F8();
extern s32 func_001FDD10();
extern s32 func_001FED30();
extern s32 func_00216050();
void FUN_001fbab8(u32 arg0, s32 arg1) {
    struct M2c_temp_16_69 *temp_16_69;
    struct M2c_temp_3_100 *temp_3_100;
    struct M2c_temp_3_61 *temp_3_61;
    struct M2c_var_16_82 *var_16_82;

    if (D_0015F604[0] != 3) {
        func_0012E3E8(0x1D);
        func_00216050(0);
    }
    D_00193300.unk14 = (s32) D_0015F604[0];
    D_00193300.unk18 = arg1;
    D_0015F604[0] = 4;
    D_00193300.unk0 = arg0;
    switch (arg0) {
    case 0:
        D_00193300.unk8 = func_001FDD10(0x4F6E, &D_00193300);
        D_00193300.unkC = func_001FDD10(0x5248);
        D_00193300.unk10 = func_001FDD10(0x5249);
        D_00193300.unk28 = 0;
        D_00193300.unk4 = 0;
        D_00193300.unk1C = 0;
        D_00193300.unk20 = 0;
        D_00193300.unk24 = 0;
        return;
    case 2:
        temp_3_61 = ((u8 *)&D_00193300 + 0x3300);
        temp_3_61->unk8 = func_001FDD10(0x524A, &D_00193300);
        temp_3_61->unk4 = 0;
        temp_3_61->unkC = 0;
        return;
    case 1:
    case 4:
        temp_16_69 = ((u8 *)&D_00193300 + 0x3300);
        temp_16_69->unk8 = func_001FDD10(0x5229, &D_00193300);
        temp_16_69->unkC = func_001FDD10(0x4EE0);
        temp_16_69->unk10 = func_001FDD10(0x524A);
        temp_16_69->unk4 = 0;
        return;
    case 5:
        var_16_82 = ((u8 *)&D_00193300 + 0x3300);
        func_001FED30(0x4E2B, &D_00193300);
block_9:
        var_16_82->unk4 = func_001F96F8(0x1E);
        var_16_82->unk20 = 0;
        var_16_82->unk24 = func_001F96F8(0x1E);
        return;
    case 3:
        var_16_82 = ((u8 *)&D_00193300 + 0x3300);
        goto block_9;
    case 6:
        temp_3_100 = ((u8 *)&D_00193300 + 0x3300);
        temp_3_100->unk4 = func_001F96F8(0x1E, &D_00193300);
        temp_3_100->unk1C = 0;
        return;
    default:
        D_00193300.unk8 = 0;
        D_00193300.unk4 = 0x78;
        D_00193300.unkC = 0;
        D_00193300.unk10 = 0;
        return;
    }
}
#endif /* NON_MATCHING */
