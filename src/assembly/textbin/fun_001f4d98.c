/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f4d98
SCORE: code=22.352942 functions=22.352942 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4d98/FUN_001f4d98.s", FUN_001f4d98);
#else
#include "rnc/assembly_textbin_fun_001f4d98_types.h"
#include "types.h"
















extern struct M2c_D_0013E500 D_0013E500;
extern s32 D_0015F444[];
extern s32 D_0015F448;
extern s32 D_00160820;
extern s32 D_00160830;
extern struct M2c_D_00160F00 *D_00160F00[];
void FUN_001f4d98(void) {
    s32 temp_9_30;
    s64 temp_7_76;
    struct M2c_temp_2_57 *temp_2_57;
    struct M2c_temp_3_55 *temp_3_55;
    struct M2c_temp_4_79 *temp_4_79;
    struct M2c_temp_6_42 *temp_6_42;
    struct M2c_temp_6_63 *temp_6_63;
    struct M2c_temp_6_82 *temp_6_82;

    if (D_0015F444[0] != 0) {
        if (D_0015F448 < 0x18) {
            D_0015F448 += 1;
        }
        goto block_5;
    }
    if (D_0015F448 != 0) {
        D_0015F448 -= 1;
block_5:
        if (D_0015F448 != 0) {
            D_00160F00[0]->unk0 = 0x10000007;
            temp_9_30 = D_0015F448 * 0x10;
            D_00160F00[0]->unk4 = 0;
            D_00160F00[0]->unk8 = 0;
            D_00160F00[0]->unkC = 0x50000007;
            temp_6_42 = D_00160F00[0];
            D_00160F00[0] = ((u8 *)temp_6_42 + (0x10));
            temp_6_42->unk10 = (s64) D_00160820;
            temp_6_42->unk10 = -0x7FFF;
            temp_3_55 = D_00160F00[0];
            temp_2_57 = ((u8 *)temp_3_55 + (0x10));
            D_00160F00[0] = temp_2_57;
            temp_3_55->unk10 = 0x104;
            temp_2_57->unk8 = (s64) (0x8000 << 0x10);
            temp_6_63 = D_00160F00[0];
            D_00160F00[0] = ((u8 *)temp_6_63 + (0x10));
            temp_6_63->unk10 = (s64) D_00160830;
            temp_6_63->unk10 = -0x7FF8;
            temp_7_76 = ((0xFFFF << 0x10) | 0xF300) << 0x18;
            temp_4_79 = D_00160F00[0];
            temp_6_82 = ((u8 *)temp_4_79 + (0x10));
            D_00160F00[0] = temp_6_82;
            temp_4_79->unk10 = (s64) (D_0013E500.unk10 | ((s64) D_0013E500.unk14 << 0x10) | temp_7_76);
            temp_6_82->unk8 = (s64) (D_0013E500.unk10 | ((D_0013E500.unk14 + temp_9_30) << 0x10) | temp_7_76);
            temp_6_82->unk10 = (s64) (D_0013E500.unk18 | ((s64) D_0013E500.unk14 << 0x10) | temp_7_76);
            temp_6_82->unk18 = (s64) (D_0013E500.unk18 | ((D_0013E500.unk14 + temp_9_30) << 0x10) | temp_7_76);
            temp_6_82->unk20 = (s64) (D_0013E500.unk18 | ((s64) D_0013E500.unk1C << 0x10) | temp_7_76);
            temp_6_82->unk28 = (s64) (D_0013E500.unk18 | ((D_0013E500.unk1C - temp_9_30) << 0x10) | temp_7_76);
            temp_6_82->unk30 = (s64) (D_0013E500.unk10 | ((s64) D_0013E500.unk1C << 0x10) | temp_7_76);
            temp_6_82->unk38 = (s64) (D_0013E500.unk10 | ((D_0013E500.unk1C - temp_9_30) << 0x10) | temp_7_76);
            D_00160F00[0] += 0x40;
        }
    }
}
#endif /* NON_MATCHING */
