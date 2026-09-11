/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fb8f0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb8f0/FUN_001fb8f0.s", FUN_001fb8f0);
#else
#include "rnc/assembly_textbin_fun_001fb8f0_types.h"
#include "types.h"






extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_00233938();
extern s32 func_00233980();
void FUN_001fb8f0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s64 arg6) {
    s32 temp_20_47;
    s32 temp_21_48;
    s64 temp_6_76;
    s64 temp_9_81;
    struct M2c_temp_2_65 *temp_2_65;
    struct M2c_temp_3_70 *temp_3_70;

    func_00233938(0x13000000);
    func_00233980(0x42, 0x64);
    D_00160F00->unk0 = 0x10000006;
    D_00160F00->unk4 = 0;
    temp_20_47 = arg5 * 8;
    temp_21_48 = arg4 * 8;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000006;
    temp_2_65 = D_00160F00;
    temp_3_70 = ((u8 *)temp_2_65 + (0x10));
    D_00160F00 = temp_3_70;
    temp_6_76 = (0x9000 << 0x2E) | 1;
    temp_2_65->unk10 = (s64) ((0x8000 << 0x2D) | 1);
    temp_9_81 = (0x9000 << 0x2E) | 0x8001;
    temp_3_70->unk58 = (s64) ((((arg2 * 0x10) + 0x8000) - temp_21_48) | ((((arg3 * 0x10) + 0x8000) - temp_20_47) << 0x10));
    temp_3_70->unk8 = 0xE;
    temp_3_70->unk38 = (u64) ((u64) (arg6 << 0x20) >> 0x20);
    temp_3_70->unk50 = (s64) ((((arg0 * 0x10) + 0x8000) - temp_21_48) | ((((arg1 * 0x10) + 0x8000) - temp_20_47) << 0x10));
    temp_3_70->unk10 = 0x33003;
    temp_3_70->unk18 = 0x47;
    temp_3_70->unk20 = temp_6_76;
    temp_3_70->unk28 = 0x10;
    temp_3_70->unk30 = 0x106;
    temp_3_70->unk40 = temp_9_81;
    temp_3_70->unk48 = 0x44;
    D_00160F00 += 0x60;
    func_00233980(0x42, (0x8000 << 0x18) | 0x44, temp_6_76, 0x106, 0x47, temp_9_81, 0x44, 0x33003);
    func_00233938(0x13000000);
}
#endif /* NON_MATCHING */
