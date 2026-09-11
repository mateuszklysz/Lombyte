/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0012f2b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012f2b8/FUN_0012f2b8.s", FUN_0012f2b8);
#else
#include "types.h"
extern u8 D_00137B80[];
extern s32 D_0015ED58;
extern s32 func_00120C30();
extern s32 func_00121450();
extern s32 func_00121630();
extern s32 func_00122298();
s32 FUN_0012f2b8(void) {
u8 sp_slot[0x3030];    s8 sp3000;
    u8 sp3001;
    s8 sp3002;
    s8 sp3003;
    u32 var_5_38;
    u8 *temp_4_42;
    u8 temp_3_43;

    sp3000 = 0x20;
    sp3001 = D_0015ED58;
    sp3002 = 0;
    sp3003 = 0;
loop_1:
    func_00121450(0x5DC, 6, sp_slot, &sp3000);
    goto loop_3;
block_2:
    func_00122298(0);
loop_3:
    if (func_00120C30(1) != 0) {
        goto block_2;
    }
    if (func_00121630() != 0) {
        goto loop_1;
    }
    var_5_38 = 0;
loop_6:
    temp_4_42 = var_5_38 + D_00137B80;
    temp_3_43 = *(sp_slot + var_5_38);
    var_5_38 += 1;
    *temp_4_42 = temp_3_43;
    if (var_5_38 < 0x2960U) {
        goto loop_6;
    }
    return 1;
}
#endif /* NON_MATCHING */
