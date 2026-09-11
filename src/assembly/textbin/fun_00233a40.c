/*
STATE: C_NON_MATCHING
SYMBOL: VU1_setScissor__Fiiii
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `VU1_setScissor__Fiiii` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 29.4366%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00233a40/FUN_00233a40.s", FUN_00233a40);
#else
#include "rnc/assembly_textbin_fun_00233a40_types.h"
#include "types.h"




extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
void FUN_00233a40(s32 arg0, s64 arg1, s64 arg2, s64 arg3) {
    s64 temp_11_21;
    s64 temp_8_16;

    D_00160F00->unk0 = 0x10000002;
    temp_8_16 = D_0013E500.unk0 - 1;
    temp_11_21 = D_0013E500.unk4 - 1;
    D_00160F00->unk4 = 0;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000002;
    D_00160F00->unk10 = 0x8001;
    D_00160F00->unk14 = 0x10000000;
    D_00160F00->unk18 = 0xE;
    D_00160F00->unk1C = 0;
    D_00160F00->unk20 = (s64) (((arg0 > -1) ? arg0 : 0) | (((temp_8_16 < arg1) ? temp_8_16 : arg1) << 0x10) | (((arg2 > -1) ? arg2 : 0) << 0x20) | (((temp_11_21 < arg3) ? temp_11_21 : arg3) << 0x30));
    D_00160F00->unk28 = 0x40;
    D_00160F00->unk2C = 0;
    D_00160F00 += 0x30;
}
#endif /* NON_MATCHING */
