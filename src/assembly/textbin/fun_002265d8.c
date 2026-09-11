/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002265d8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 51.2973%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002265d8/FUN_002265d8.s", FUN_002265d8);
#else
#include "rnc/assembly_textbin_fun_002265d8_types.h"
#include "types.h"


extern s32 D_00160350;
extern u8 D_001D5EC0[];
s32 FUN_002265d8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10, s32 arg_sp18, s32 arg_sp20) {    s32 arg_sp0;
    s32 arg_sp10;
    s32 arg_sp18;
    s32 arg_sp20;
    s32 arg_sp8;
    s32 temp_3_13;
    struct M2c_temp_3_20 *temp_3_20;

    if (D_00160350 < 8) {
        temp_3_13 = D_00160350 * 0x38;
        D_00160350 += 1;
        temp_3_20 = temp_3_13 + D_001D5EC0;
        temp_3_20->unk4 = arg0;
        temp_3_20->unk8 = arg1;
        temp_3_20->unkC = arg2;
        temp_3_20->unk10 = arg3;
        temp_3_20->unk14 = arg4;
        temp_3_20->unk18 = arg5;
        temp_3_20->unk1C = arg6;
        temp_3_20->unk20 = arg7;
        temp_3_20->unk34 = arg_sp20;
        temp_3_20->unk24 = arg_sp0;
        temp_3_20->unk28 = arg_sp8;
        temp_3_20->unk2C = arg_sp10;
        temp_3_20->unk0 = 0;
        temp_3_20->unk30 = arg_sp18;
        return 0;
    }
    return -1;
}
#endif /* NON_MATCHING */
