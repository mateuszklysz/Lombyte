/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00206e18
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00206e18/FUN_00206e18.s", FUN_00206e18);
#else
#include "rnc/assembly_textbin_fun_00206e18_types.h"
#include "types.h"


extern struct M2c_D_0013F350 D_0013F350;
extern u32 D_001A03A8[];
extern s32 func_00208818();
s32 FUN_00206e18(s32 arg0, s32 arg1, f32 fparg2) {
    s32 var_18_10;
    s32 var_2_49;

    var_18_10 = 0;
    if (((u32) (D_0013F350.unk208C - 0x11) < 2U) || (D_0013F350.unk12E4 == 1)) {
        var_18_10 = 1;
    }
    if (((func_00208818(arg0, arg1, 0x93, 0x168, 0x182, 0x168) == 0) || (arg1 < 0x135) || (D_001A03A8[0] == 0) || (var_2_49 = 1, !(fparg2 >= 47.7f))) && ((var_18_10 == 0) || (func_00208818(arg0, arg1, 0xC5, 0x9A, 0x13C, 0xE1) == 0) || (func_00208818(arg0, arg1, 0xD6, 0xC3, 0x157, 0xC5) == 0) || (var_2_49 = 1, (func_00208818(arg0, arg1, 0x107, 0xDA, 0x171, 0xA0) == 0)))) {
        var_2_49 = 0;
    }
    return var_2_49;
}
#endif /* NON_MATCHING */
