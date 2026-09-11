/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00221e50
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00221e50/FUN_00221e50.s", FUN_00221e50);
#else
#include "rnc/assembly_textbin_fun_00221e50_types.h"
#include "types.h"








extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u32 D_001D5D14[];
extern s32 func_0022DA68();
s32 FUN_00221e50(struct M2c_arg0 *arg0) {
    s32 temp_3_29;
    s32 temp_hi_51;
    s32 temp_hi_69;

    if (D_0013C940.unk1C4 & 0xD00) {
        if (D_001D5D14[0] == 0) {
            return 1;
        }
        goto block_4;
    }
block_4:
    if (D_0013C940.unk1C4 & 0x10) {
        temp_3_29 = D_001D5BF0.unk4->unk38;
        if (temp_3_29 != 0) {
            D_001D5BF0.unk8 = temp_3_29;
            goto block_10;
        }
        if (D_001D5BF0.unk124 == 0) {
            return -1;
        }
        goto block_11;
    }
block_10:
block_11:
    if (D_0013C940.unk1A4 & 0x2040) {
        temp_hi_51 = (s32) (arg0->unk54 + 1) % 12;
        arg0->unk54 = temp_hi_51;
        func_0022DA68(1, 0x11, arg0->unk14, temp_hi_51, arg0);
    } else if (D_0013C940.unk1A4 & 0x8020) {
        temp_hi_69 = (s32) (arg0->unk54 + 0xB) % 12;
        arg0->unk54 = temp_hi_69;
        func_0022DA68(1, 0x11, arg0->unk14, temp_hi_69, arg0);
    }
    return 0;
}
#endif /* NON_MATCHING */
