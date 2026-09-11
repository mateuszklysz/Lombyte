/*
STATE: C_NON_MATCHING
SYMBOL: Stash_SendData
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `Stash_SendData` starts here. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 69.1071%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00232e40/FUN_00232e40.s", FUN_00232e40);
#else
#include "rnc/assembly_textbin_fun_00232e40_types.h"
#include "types.h"




extern struct M2c_D_001DD1A0 D_001DD1A0;
extern u8 D_001DD1D8[];
extern s32 func_00118B20();
s32 FUN_00232e40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
u8 sp_slot[0x60];    s32 temp_17_12;
    s32 temp_2_41;
    s32 temp_4_42;
    struct M2c_temp_6_45 *temp_6_45;

    temp_17_12 = arg2 * 0x10;
    if ((D_001DD1A0.unk4 - (D_001DD1A0.unk30 - D_001DD1A0.unk0)) < temp_17_12) {
        return -1;
    }
    if (D_001DD1A0.unk34 != 0x40) {
        func_00118B20(sp_slot, 1, D_001DD1A0.unk30, arg0, D_001DD1A0.unk30, arg1 * 0x10, 0);
        temp_2_41 = D_001DD1A0.unk34;
        temp_4_42 = temp_2_41 * 0x10;
        temp_6_45 = D_001DD1D8 + temp_4_42;
        *(temp_4_42 + D_001DD1D8) = D_001DD1A0.unk30;
        temp_6_45->unk4 = arg2;
        temp_6_45->unk8 = arg3;
        D_001DD1A0.unk34 = (s32) (D_001DD1A0.unk34 + 1);
        D_001DD1A0.unk30 = (s32) (D_001DD1A0.unk30 + temp_17_12);
        return temp_2_41;
    }
    return -2;
}
#endif /* NON_MATCHING */
