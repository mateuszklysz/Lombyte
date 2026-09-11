/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0023ba60
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.1053%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023ba60/FUN_0023ba60.s", FUN_0023ba60);
#else
#include "rnc/assembly_textbin_fun_0023ba60_types.h"
#include "types.h"


extern s32 func_00120C30();
extern s32 func_00121450();
s32 FUN_0023ba60(struct M2c_arg0 *arg0, u32 arg1, u32 arg2, u32 arg3) {
u8 sp_slot[0x70];    s32 temp_18_13;
    s32 var_2_27;

    temp_18_13 = arg2 >> 0xB;
    func_00121450(arg0->unk4, temp_18_13, arg1, sp_slot, 0x64, 0, 0);
    var_2_27 = 0;
    if (arg3 == 0) {
        arg0->unk4 = (s32) (arg0->unk4 + temp_18_13);
        func_00120C30(0);
        var_2_27 = arg2;
    }
    return var_2_27;
}
#endif /* NON_MATCHING */
