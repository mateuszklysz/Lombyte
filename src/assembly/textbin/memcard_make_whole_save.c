/*
STATE: C_NON_MATCHING
SYMBOL: memcard_MakeWholeSave
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `memcard_MakeWholeSave`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 65.1429%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/memcard_make_whole_save/FUN_0020abb0.s", FUN_0020abb0);
#else
#include "rnc/assembly_textbin_fun_0020abb0_types.h"
#include "types.h"


extern u8 D_001A04C0[];
extern u8 D_001A07C0[];
extern s32 func_0020AC88();
extern s32 func_0020AD78();
void FUN_0020abb0(struct M2c_arg0 *arg0) {
    s32 temp_5_32;
    s32 var_19_15;
    s32 *temp_18_25;
    s32 *var_18_29;
    s32 *var_4_30;

    var_19_15 = 0;
    arg0->unk0 = func_0020AC88(D_001A04C0);
    arg0->unk4 = func_0020AC88(D_001A07C0);
    temp_18_25 = ((u8 *)arg0 + (8));
    var_18_29 = temp_18_25 + func_0020AD78(temp_18_25, 0, D_001A04C0);
    var_4_30 = var_18_29;
loop_1:
    temp_5_32 = var_19_15;
    var_19_15 += 1;
    var_18_29 += func_0020AD78(var_4_30, temp_5_32, D_001A07C0);
    var_4_30 = var_18_29;
    if (var_19_15 < 0x14) {
        goto loop_1;
    }
    return;
}
#endif /* NON_MATCHING */
