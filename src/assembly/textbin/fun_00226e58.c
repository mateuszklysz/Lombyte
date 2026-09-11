/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00226e58
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00226e58/FUN_00226e58.s", FUN_00226e58);
#else
#include "rnc/assembly_textbin_fun_00226e58_types.h"
#include "types.h"




extern struct M2c_D_001D2800 D_001D2800;
extern struct M2c_D_001D2878 D_001D2878;
extern s32 func_00215300();
extern s32 func_00215348();
void FUN_00226e58(void) {
    s16 var_2_23;
    s16 var_2_29;
    s16 var_2_35;
    s16 var_2_41;
    s32 temp_11_20;
    s32 temp_16_16;
    s32 temp_17_13;

    temp_17_13 = func_00215348() >= 0xF;
    temp_16_16 = func_00215348() >= 0x1E;
    temp_11_20 = func_00215300() >= 0xA;
    var_2_23 = 2;
    if (temp_17_13 != 0) {
        var_2_23 = 3;
    }
    D_001D2800.unk4A = var_2_29;
    var_2_29 = 2;
    if (temp_16_16 != 0) {
        var_2_29 = 3;
    }
    D_001D2800.unk56 = var_2_35;
    var_2_35 = 2;
    if (temp_11_20 != 0) {
        var_2_35 = 0xA;
    }
    D_001D2800.unk3E = var_2_23;
    var_2_41 = 2;
    if (temp_11_20 != 0) {
        var_2_41 = 3;
    }
    D_001D2800.unk62 = var_2_41;
    D_001D2878.unk20 = (s32) ((temp_11_20 == 0) ? 0x4FDB : 0x4FD8);
    D_001D2878.unk14 = (s32) ((temp_17_13 != 0) ? 0x4FD3 : 0x4FD9);
    D_001D2878.unk18 = (s32) ((temp_16_16 != 0) ? 0x4FD4 : 0x4FDA);
    D_001D2878.unk1C = (s32) ((temp_11_20 != 0) ? 0x4FD7 : 0x4FDB);
}
#endif /* NON_MATCHING */
