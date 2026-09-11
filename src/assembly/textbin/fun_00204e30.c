/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00204e30
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00204e30/FUN_00204e30.s", FUN_00204e30);
#else
#include "rnc/assembly_textbin_fun_00204e30_types.h"
#include "types.h"


extern s32 D_0015F458;
extern u8 D_0018D040[];
s32 FUN_00204e30(s64 arg0, s64 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_2_7;
    s32 temp_4_38;
    s32 temp_8_21;
    s32 temp_9_12;
    struct M2c_temp_2_41 *temp_2_41;

    temp_2_7 = arg0 - 6;
    temp_9_12 = arg5 >> 8;
    temp_8_21 = arg4 >> 8;
    if (D_0015F458 < 0x40) {
        temp_4_38 = D_0015F458 * 0x10;
        temp_2_41 = temp_4_38 + D_0018D040;
        temp_2_41->unk0 = arg2;
        temp_2_41->unk6 = (s16) temp_8_21;
        temp_2_41->unk4 = 0;
        *(s32 *)((u8 *)(D_0018D040 + temp_4_38) + 0x8) = arg3;
        temp_2_41->unkE = (s16) temp_9_12;
        temp_2_41->unkC = (s8) arg0;
        temp_2_41->unkD = (s8) arg1;
        D_0015F458 += 1;
    }
    return temp_9_12 | ((1 << ((temp_2_7 <= -1) ? 0 : temp_2_7)) << 0xE) | ((arg0 << 0x1A) | 0x01300000) | (arg1 << 0x1E) | (((s64) temp_8_21 << 0x25) | (0x8000 << 0x13)) | (-1 << 0x3F);
}
#endif /* NON_MATCHING */
