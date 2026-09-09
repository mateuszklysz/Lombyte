/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 32.9673%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002012b8/FUN_002012b8.s", FUN_002012b8);
#else
#include "rnc/assembly_textbin_fun_002012b8_types.h"
#include "types.h"












extern s32 D_0015ED80;
extern s32 D_0015EE84;
extern struct M2c_D_00160F00 *D_00160F00;
void FUN_002012b8(s32 arg0) {
    s32 var_12_22;
    s32 var_13_20;
    s64 temp_4_53;
    s64 temp_5_57;
    s64 temp_7_61;
    s64 temp_9_48;
    s64 var_11_18;
    struct M2c_temp_2_145 *temp_2_145;
    struct M2c_temp_2_83 *temp_2_83;
    struct M2c_temp_3_113 *temp_3_113;
    struct M2c_temp_3_143 *temp_3_143;
    struct M2c_temp_3_82 *temp_3_82;
    s32 *temp_4_146;
    s32 *temp_9_84;

    var_11_18 = (D_0015ED80 != 0) ? 0x1C0 : 0x1A0;
    var_13_20 = arg0;
    var_12_22 = (s32) D_0015EE84 >> 8;
    do {
        temp_9_48 = var_11_18 - 0x80;
        D_00160F00->unk0 = 0x10000006;
        temp_4_53 = (temp_9_48 <= -1) ? var_11_18 : 0x80;
        temp_5_57 = temp_4_53 << 7;
        D_00160F00->unk4 = 0;
        temp_7_61 = ((s64) var_12_22 << 0x20) | (0x8000 << 0x24);
        var_12_22 += (s64) (temp_4_53 << 0x23) >> 0x20;
        var_11_18 = temp_9_48;
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = 0x50000006;
        temp_3_82 = D_00160F00;
        temp_2_83 = ((u8 *)temp_3_82 + (0x10));
        temp_9_84 = ((u8 *)temp_3_82 + (0x70));
        D_00160F00 = temp_2_83;
        temp_3_82->unk10 = (s64) ((0x8000 << 0x2F) | 1);
        temp_2_83->unk10 = temp_7_61;
        temp_2_83->unk30 = (s64) ((temp_4_53 << 0x20) | 0x200);
        temp_2_83->unk50 = (s64) (temp_5_57 | ((0x8000 << 0x2C) | 0x8000));
        temp_2_83->unk58 = 0;
        temp_2_83->unk8 = 0x0EEEEEEE;
        temp_2_83->unk18 = 0x50;
        temp_2_83->unk20 = 0;
        temp_2_83->unk28 = 0x51;
        temp_2_83->unk38 = 0x52;
        temp_2_83->unk40 = 0;
        temp_2_83->unk48 = 0x53;
        D_00160F00 = temp_9_84;
        temp_3_82->unk70 = (s32) ((s64) ((temp_5_57 | 0x30000000) << 0x20) >> 0x20);
        D_00160F00->unk4 = var_13_20;
        var_13_20 += (s64) (temp_4_53 << 0x2B) >> 0x20;
        D_00160F00->unk8 = 0;
        D_00160F00->unkC = (s32) (((s64) (temp_5_57 << 0x20) >> 0x20) | 0x50000000);
        temp_3_113 = D_00160F00;
        D_00160F00 = ((u8 *)temp_3_113 + (0x10));
    } while (var_11_18 > 0);
    temp_3_113->unk10 = 0x10000002;
    do {
        D_00160F00->unk4 = 0;
        D_00160F00->unk8 = 0;
    } while (0);
    D_00160F00->unkC = 0x50000002;
    temp_3_143 = D_00160F00;
    temp_2_145 = ((u8 *)temp_3_143 + (0x10));
    temp_4_146 = ((u8 *)temp_3_143 + (0x30));
    D_00160F00 = temp_2_145;
    temp_3_143->unk10 = (s64) ((0x8000 << 0x2D) | 0x8001);
    temp_2_145->unk18 = 0x3F;
    temp_2_145->unk8 = 0xE;
    temp_2_145->unk10 = 0;
    D_00160F00 = temp_4_146;
}
#endif /* NON_MATCHING */
