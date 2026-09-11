/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00227140
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 27.2778%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00227140/FUN_00227140.s", FUN_00227140);
#else
#include "rnc/assembly_textbin_fun_00227140_types.h"
#include "types.h"




extern u8 D_00160360[];
extern struct M2c_D_00160F00 *D_00160F00;
extern u8 D_001D7D90[];
extern s32 func_00228598();
void FUN_00227140(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_6_20;
    struct M2c_temp_8_19 *temp_8_19;

    D_00160F00->unk0 = 0x30000003;
    temp_8_19 = D_00160F00;
    temp_6_20 = (arg2 * 0x30) + D_001D7D90;
    temp_8_19->unk4 = temp_6_20;
    D_00160F00->unkC = 0x50000003;
    D_00160F00->unk8 = 0x13000000;
    D_00160F00 += 0x10;
    func_00228598(*((arg1 * 4) + D_00160360), temp_6_20, 0x50000003, temp_8_19, 0x13000000);
}
#endif /* NON_MATCHING */
