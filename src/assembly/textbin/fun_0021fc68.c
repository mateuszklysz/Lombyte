/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0021fc68
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 66.4138%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021fc68/FUN_0021fc68.s", FUN_0021fc68);
#else
#include "rnc/assembly_textbin_fun_0021fc68_types.h"
#include "types.h"




extern struct M2c_D_00151780 D_00151780;
extern u32 D_001A0348[];
extern s32 func_001F5450();
s32 FUN_0021fc68(struct M2c_arg0 *arg0) {
    if (arg0->unk44 < 2) {
        return 0;
    }
    func_001F5450(0, 0, D_00151780.unk160, D_00151780.unk162, 0, 0, arg0->unk38, arg0->unk3C, (0x8080 << 0x10) | 0x8080, D_001A0348[0]);
    return 0x10;
}
#endif /* NON_MATCHING */
