/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002242b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002242b8/FUN_002242b8.s", FUN_002242b8);
#else
#include "rnc/assembly_textbin_fun_002242b8_types.h"
#include "types.h"


extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_00225530();
extern s32 func_00225CD8();
extern s32 func_002267B8();
s32 FUN_002242b8(s32 arg0) {
    s32 *var_16_10;
    s32 *var_17_26;
    s32 var_17_8;
    s32 var_18_22;

    var_17_8 = 0x17;
    var_16_10 = arg0 + 0x44;
    do {
        var_17_8 -= 1;
        *var_16_10 = func_00225530(*var_16_10);
        var_16_10 += 4;
    } while (var_17_8 >= 0);
    var_18_22 = 2;
    var_17_26 = ((u8 *)&D_001D5BF0 + 0xB0);
    D_001D5BF0.unkA0 = func_00225CD8(D_001D5BF0.unkA0);
    D_001D5BF0.unkA4 = func_00225CD8(D_001D5BF0.unkA4);
    D_001D5BF0.unkC9 = 0xFF;
    D_001D5BF0.unkC8 = 0xFF;
    D_001D5BF0.unkCA = 0;
    func_002267B8();
    do {
        var_18_22 -= 1;
        *var_17_26 = func_00225CD8(*var_17_26);
        var_17_26 += 4;
    } while (var_18_22 >= 0);
    return 0;
}
#endif /* NON_MATCHING */
