/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00217048
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00217048/FUN_00217048.s", FUN_00217048);
#else
#include "rnc/assembly_textbin_fun_00217048_types.h"
#include "types.h"




extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_001CD760 D_001CD760;
extern s32 func_00124510();
extern s32 func_00124A48();
extern s32 func_00124A88();
void FUN_00217048(void) {
    s32 temp_2_22;

    func_00124510();
    func_00124A48(0);
    D_001CD760.unk0 = 2;
    D_001CD760.unk4 = 0;
    temp_2_22 = func_00124A88(&D_001CD760, &D_0013C940);
    D_001CD760.unk0 = 2;
    D_001CD760.unk4 = 1;
    D_0013C940.unk194 = temp_2_22;
    D_0013C940.unk19C = 0;
    D_0013C940.unk198 = 0;
}
#endif /* NON_MATCHING */
