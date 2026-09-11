/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00207b08
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 56.2619%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00207b08/FUN_00207b08.s", FUN_00207b08);
#else
#include "rnc/assembly_textbin_fun_00207b08_types.h"
#include "types.h"


extern u8 D_0013D560[];
extern s32 D_0015ED84;
extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 func_001F97E8();
extern s32 func_001FA860();
extern s32 func_00208030();
extern s32 func_00208810();
void FUN_00207b08(s32 arg0) {
    s32 *temp_4_39;
    s32 temp_2_25;
    s32 temp_4_30;

    func_00208810();
    if (D_001A00F0.unk28 == 0) {
        goto block_2;
    }
    goto block_4;
block_2:
    func_001F97E8(arg0, 0, 0x800);
    return;
block_4:
    temp_2_25 = func_001FA860(arg0, 0x800, D_001A00F0.unk14, D_001A00F0.unkC);
    temp_4_30 = D_0015ED84;
    if (temp_2_25 != -1) {
        goto block_6;
    }
    func_00208030(arg0);
block_6:
    temp_4_39 = (temp_4_30 * 4) + D_0013D560;
    if (*temp_4_39 >= temp_2_25) {
        goto block_8;
    }
    *temp_4_39 = temp_2_25;
block_8:
    return;
}
#endif /* NON_MATCHING */
