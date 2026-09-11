/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002267b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002267b8/FUN_002267b8.s", FUN_002267b8);
#else
#include "rnc/assembly_textbin_fun_002267b8_types.h"
#include "types.h"




extern u8 D_001B3200[];
extern u8 D_001B3AC0[];
extern u8 D_001D59D8[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
void FUN_002267b8(void) {
    s32 var_6_8;
    struct M2c_var_5_20 *var_5_20;

    var_6_8 = D_001D5BF0.unkA8;
    if (var_6_8 < (var_6_8 + D_001D5BF0.unkAC)) {
        var_5_20 = (var_6_8 * 8) + D_001D59D8;
        do {
            var_6_8 += 1;
            *(s32 *)((u8 *)(*((*(var_5_20->unk0 + D_001B3AC0) * 4) + D_001B3200) + (var_5_20->unk4 * 4)) + 0x48) = 0;
            var_5_20 += 8;
        } while (var_6_8 < (D_001D5BF0.unkA8 + D_001D5BF0.unkAC));
    }
    D_001D5BF0.unkAC = 0;
}
#endif /* NON_MATCHING */
