/*
STATE: C_NON_MATCHING
SYMBOL: DoSkyGifPaging__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `DoSkyGifPaging__Fv` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 40.4000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022b558/FUN_0022b558.s", FUN_0022b558);
#else
#include "rnc/assembly_textbin_fun_0022b558_types.h"
#include "types.h"








extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern struct M2c_D_00160470 *D_00160470;
extern struct M2c_D_00160474 *D_00160474;
extern struct M2c_D_00160F00 *D_00160F00;
extern u8 D_0018A2B4[];
extern s32 func_0020B4A8();
extern s32 func_00233B68();
void FUN_0022b558(void) {
    struct M2c_temp_3_33 *temp_3_33;

    D_00160474 = D_00160F00;
    D_00160F00 += 0x10;
    D_00160470->unk0 = 0x20000000;
    D_00160470->unk4 = (s32 *) D_00160F00;
    D_00160470->unk8 = 0;
    D_00160470->unkC = 0;
    temp_3_33 = D_00160F00;
    if (*(s32 *)D_0018A2B4 != 0) {
        func_0020B4A8(D_00160470, D_0018A2B4);
        func_00233B68();
    }
    temp_3_33->unk0 = 0x20000000;
    D_00160F00->unk4 = (void *) (D_00160470 + 0x10);
    do {
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0;
    } while (0);
    D_00160F00 += 0x10;
    D_00160474->unk0 = 0x20000000;
    D_00160474->unk4 = (s32 *) D_00160F00;
    D_00160474->unk8 = 0;
    D_00160474->unkC = 0;
    D_0015EE74 = D_0015EE78;
}
#endif /* NON_MATCHING */
