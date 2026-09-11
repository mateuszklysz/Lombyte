/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00221968
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00221968/FUN_00221968.s", FUN_00221968);
#else
#include "rnc/assembly_textbin_fun_00221968_types.h"
#include "types.h"






extern u32 D_0013CB04[];
extern u32 D_0015ED84[];
extern u32 D_001A0314[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_0022DA68();
s32 FUN_00221968(struct M2c_arg0 *arg0) {
    s32 temp_3_15;

    if (!(D_0013CB04[0] & 0x10)) {
        goto block_7;
    }
    temp_3_15 = D_001D5BF0.unk4->unk38;
    if (temp_3_15 != 0) {
        goto block_3;
    }
    goto block_5;
block_3:
    D_001D5BF0.unk8 = temp_3_15;
    goto block_13;
block_5:
    if (D_001D5BF0.unk124 != 0) {
        goto block_14;
    }
    return -1;
block_7:
    if (!(D_0013CB04[0] & 0x800)) {
        goto block_9;
    }
    D_001A0314[0] = D_0015ED84[0];
    return 1;
block_9:
    if (!(D_0013CB04[0] & 0x40)) {
        goto block_11;
    }
    func_0022DA68(0, 0x11, arg0->unk14, arg0);
    return 1;
block_11:
    if (!(D_0013CB04[0] & 0x20)) {
        goto block_13;
    }
    D_001D5BF0.unkE4 = (s32) D_001A0314[0];
    D_001D5BF0.unkF0 = (void *) D_001D5BF0.unk4;
    D_001D5BF0.unkF4 = 0xF;
    D_001D5BF0.unkC = 3;
    func_0022DA68(0, 0x11, arg0->unk14, arg0);
block_13:
block_14:
    return 0;
}
#endif /* NON_MATCHING */
