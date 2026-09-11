/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ffe18
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 17.7748%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ffe18/FUN_001ffe18.s", FUN_001ffe18);
#else
#include "rnc/assembly_textbin_fun_001ffe18_types.h"
#include "types.h"












extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001FFA10();
void FUN_001ffe18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s64 arg5) {
    s32 temp_17_99;
    s32 temp_19_80;
    s32 temp_20_51;
    s32 temp_21_86;
    s32 temp_23_48;
    s32 temp_5_81;
    s64 temp_20_70;
    s64 temp_23_82;
    s64 temp_2_65;
    struct M2c_temp_10_44 *temp_10_44;
    struct M2c_temp_18_61 *temp_18_61;
    struct M2c_temp_2_60 *temp_2_60;

    temp_10_44 = D_0019A3E8.unk24 + (*(s32 *)((u8 *)((arg0 * 4) + D_0019A3E8.unk20) + 0x2) * 8);
    D_00160F00->unk4 = 0;
    temp_23_48 = 1 << temp_10_44->unk7;
    temp_20_51 = 1 << temp_10_44->unk6;
    D_00160F00->unk0 = 0x10000007;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000007;
    temp_2_60 = D_00160F00;
    temp_18_61 = ((u8 *)temp_2_60 + (0x10));
    D_00160F00 = temp_18_61;
    temp_2_60->unk10 = (s64) ((0xB400 << 0x30) | 0x8001);
    temp_18_61->unk8 = (s64) ((((0xA6A6 << 0x10) | 0xA6A6) << 0xB) | 0x106);
    temp_2_65 = func_001FFA10(temp_10_44, 0x10000007);
    temp_20_70 = temp_20_51 * 0x10;
    temp_18_61->unk20 = (s64) ((arg5 << 0x18) | 0x7F7F7F);
    temp_18_61->unk28 = temp_20_70;
    temp_18_61->unk10 = temp_2_65;
    temp_18_61->unk18 = 0x154;
    temp_19_80 = (arg2 + arg4) * 0x10;
    temp_5_81 = arg1 * 0x10;
    temp_23_82 = temp_23_48 << 0x14;
    temp_21_86 = arg2 * 0x10;
    temp_18_61->unk38 = (s64) (temp_23_82 + temp_20_70);
    temp_18_61->unk30 = (s64) (((temp_5_81 + D_0013E500.unk10) - 8) | (((temp_19_80 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_17_99 = (arg1 + arg3) * 0x10;
    temp_18_61->unk48 = 0;
    temp_18_61->unk40 = (s64) (((temp_5_81 + D_0013E500.unk10) - 8) | (((temp_21_86 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_18_61->unk58 = temp_23_82;
    temp_18_61->unk50 = (s64) (((temp_17_99 + D_0013E500.unk10) - 8) | (((temp_19_80 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_18_61->unk68 = 0;
    temp_18_61->unk60 = (s64) (((temp_17_99 + D_0013E500.unk10) - 8) | (((temp_21_86 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    D_00160F00 += 0x70;
}
#endif /* NON_MATCHING */
