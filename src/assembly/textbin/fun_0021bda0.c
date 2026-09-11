/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021bda0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021bda0/FUN_0021bda0.s", FUN_0021bda0);
#else
#include "rnc/assembly_textbin_fun_0021bda0_types.h"
#include "types.h"






extern struct M2c_D_001516D0 D_001516D0;
extern struct M2c_D_001A00F0 D_001A00F0;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u8 D_001D5CBB[];
extern s32 func_002166E8();
s32 FUN_0021bda0(s8 *arg0, s32 *arg1, s32 arg2) {
    s32 *var_5_0;
    s32 *temp_3_21;
    s32 var_6_0;
    s8 *var_4_0;

    var_4_0 = arg0;
    var_5_0 = arg1;
    var_6_0 = arg2;
    if (D_001516D0.unk8 == 0) {
        var_6_0 = -1;
        var_5_0 = &D_001A00F0;
        if (D_001A00F0.unk2A0 != -1) {
            temp_3_21 = (D_001A00F0.unk2A0 * 4) + (((u8 *)&D_001A00F0 + 0x28C));
            var_4_0 = D_001D5CBB;
            *(s32 *)D_001D5CBB = 0;
            *temp_3_21 ^= 0x1000;
            D_001A00F0.unk2A0 = -1;
        }
    }
    if (D_001516D0.unk8 != 0) {
        if (D_001D5BF0.unkCB != 0) {
            func_002166E8(var_4_0, var_5_0, var_6_0, &D_001516D0);
            D_001D5BF0.unkCB = 0U;
            *(s32 *)((u8 *)(((u8 *)&D_001A00F0 + (D_001A00F0.unk2A0 * 4))) + 0x28C) = -1;
            D_001A00F0.unk2A0 = -1;
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
