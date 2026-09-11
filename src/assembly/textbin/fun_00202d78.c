/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00202d78
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 29.6133%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00202d78/FUN_00202d78.s", FUN_00202d78);
#else
#include "rnc/assembly_textbin_fun_00202d78_types.h"
#include "types.h"












extern u32 D_0015EE8C[];
extern u8 D_0019E6C0[];
extern u8 D_0019E6D8[];
extern s32 func_001F97A0();
void FUN_00202d78(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1, s64 arg2, s64 arg3, s32 arg4, s64 arg5, s64 arg6) {
    s32 sp0;
    struct M2c_var_6_107 *var_6_107;
    s32 temp_18_28;
    s32 temp_20_27;
    s32 temp_2_44;
    s32 temp_3_26;
    s32 temp_5_31;
    s64 temp_23_37;
    s64 temp_8_75;
    s64 temp_9_38;
    u16 temp_3_24;
    struct M2c_temp_17_119 *temp_17_119;
    struct M2c_temp_17_141 *temp_17_141;
    struct M2c_temp_17_82 *temp_17_82;

    temp_3_24 = arg1->unk4;
    sp0 = arg4;
    temp_3_26 = temp_3_24 << 0x10;
    temp_20_27 = temp_3_26 >> 0x17;
    temp_18_28 = temp_3_26 >> 0x16;
    temp_5_31 = temp_18_28 > 0;
    temp_23_37 = func_001F97A0((s16) temp_3_24, temp_5_31, 1);
    temp_9_38 = func_001F97A0(arg1->unk6);
    temp_2_44 = (s32) D_0015EE8C[0] >> 8;
    if (arg6 >= 0) {
        arg0->unk0 = (s64) (((arg1->unk8 - 1) * 4) | ((arg3 << 6) | 0x20) | (arg2 << 0x20));
        temp_8_75 = 0x8000 << 0x13;
        temp_17_82 = ((u8 *)arg0 + (0x10));
        arg0->unk10 = (s64) (sp0 | (arg5 * 4) | (arg6 << 0x18));
        *(s32 *)((u8 *)(((u8 *)temp_17_82 + (0x10))) + 0x10) = (s64) (((s64) ((temp_20_27 <= 0) ? 1 : temp_20_27) << 0xE) | ((arg1->unkC + temp_2_44) << 0x14) | (((arg1->unkE + temp_2_44) << 0x28) | temp_8_75) | (0x8000 << 0x27));
        temp_17_82->unk10 = (s64) (((s64) ((temp_5_31 == 0) ? 1 : temp_18_28) << 0xE) | ((temp_23_37 << 0x1A) | 0x01300000) | (temp_9_38 << 0x1E) | (((arg1->unkA + temp_2_44) << 0x25) | temp_8_75) | (-1 << 0x3F));
        return;
    }
    if (arg6 < -1) {
        var_6_107 = D_0019E6C0;
        if (arg6 == -3) {
            var_6_107 = D_0019E6D8;
        }
        arg0->unk0 = (s64) ((arg3 << 6) | ((arg2 << 0x20) | 0x20));
        temp_17_119 = ((u8 *)arg0 + (0x10));
        arg0->unk10 = 5;
        temp_17_119->unk10 = (s64) var_6_107->unk0;
        *(s32 *)((u8 *)(((u8 *)temp_17_119 + (0x10))) + 0x10) = (s64) var_6_107->unk10;
        return;
    }
    arg0->unk0 = (s64) ((arg3 << 6) | ((arg2 << 0x20) | 0x20));
    temp_17_141 = ((u8 *)arg0 + (0x10));
    arg0->unk10 = 5;
    temp_17_141->unk10 = (s64) ((((0x8000 << 0x1D) | 0x9980) << 0x13) | 0x7FFB);
    *(s32 *)((u8 *)(((u8 *)temp_17_141 + (0x10))) + 0x10) = 0;
}
#endif /* NON_MATCHING */
