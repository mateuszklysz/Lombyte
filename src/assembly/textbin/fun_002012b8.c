/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 28.7124%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002012b8/FUN_002012b8.s", FUN_002012b8);
#else
#include "rnc/assembly_textbin_fun_002012b8_types.h"
#include "types.h"












extern s32 D_0015ED80[];
extern s32 D_0015EE84;
extern struct M2c_D_00160F00 *D_00160F00[];
void FUN_002012b8(s32 arg0) {
    s32 var_12_20;
    s32 var_13_18;
    s64 temp_4_51;
    s64 temp_5_55;
    s64 temp_7_59;
    s64 temp_9_46;
    s64 var_11_16;
    struct M2c_temp_2_143 *temp_2_143;
    struct M2c_temp_2_81 *temp_2_81;
    struct M2c_temp_3_111 *temp_3_111;
    struct M2c_temp_3_141 *temp_3_141;
    struct M2c_temp_3_80 *temp_3_80;
    s32 *temp_4_144;
    s32 *temp_9_82;

    var_11_16 = (D_0015ED80[0] != 0) ? 0x1C0 : 0x1A0;
    var_13_18 = arg0;
    var_12_20 = (s32) D_0015EE84 >> 8;
    do {
        temp_9_46 = var_11_16 - 0x80;
        D_00160F00[0]->unk0 = 0x10000006;
        temp_4_51 = (temp_9_46 <= -1) ? var_11_16 : 0x80;
        temp_5_55 = temp_4_51 << 7;
        D_00160F00[0]->unk4 = 0;
        temp_7_59 = ((s64) var_12_20 << 0x20) | (0x8000 << 0x24);
        var_12_20 += (s64) (temp_4_51 << 0x23) >> 0x20;
        var_11_16 = temp_9_46;
        D_00160F00[0]->unk8 = 0;
        D_00160F00[0]->unkC = 0x50000006;
        temp_3_80 = D_00160F00[0];
        temp_2_81 = ((u8 *)temp_3_80 + (0x10));
        temp_9_82 = ((u8 *)temp_3_80 + (0x70));
        D_00160F00[0] = temp_2_81;
        temp_3_80->unk10 = (s64) ((0x8000 << 0x2F) | 1);
        temp_2_81->unk10 = temp_7_59;
        temp_2_81->unk30 = (s64) ((temp_4_51 << 0x20) | 0x200);
        temp_2_81->unk50 = (s64) (temp_5_55 | ((0x8000 << 0x2C) | 0x8000));
        temp_2_81->unk58 = 0;
        temp_2_81->unk8 = 0x0EEEEEEE;
        temp_2_81->unk18 = 0x50;
        temp_2_81->unk20 = 0;
        temp_2_81->unk28 = 0x51;
        temp_2_81->unk38 = 0x52;
        temp_2_81->unk40 = 0;
        temp_2_81->unk48 = 0x53;
        D_00160F00[0] = temp_9_82;
        temp_3_80->unk70 = (s32) ((s64) ((temp_5_55 | 0x30000000) << 0x20) >> 0x20);
        D_00160F00[0]->unk4 = var_13_18;
        var_13_18 += (s64) (temp_4_51 << 0x2B) >> 0x20;
        D_00160F00[0]->unk8 = 0;
        D_00160F00[0]->unkC = (s32) (((s64) (temp_5_55 << 0x20) >> 0x20) | 0x50000000);
        temp_3_111 = D_00160F00[0];
        D_00160F00[0] = ((u8 *)temp_3_111 + (0x10));
    } while (var_11_16 > 0);
    temp_3_111->unk10 = 0x10000002;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0x50000002;
    temp_3_141 = D_00160F00[0];
    temp_2_143 = ((u8 *)temp_3_141 + (0x10));
    temp_4_144 = ((u8 *)temp_3_141 + (0x30));
    D_00160F00[0] = temp_2_143;
    temp_3_141->unk10 = (s64) ((0x8000 << 0x2D) | 0x8001);
    temp_2_143->unk18 = 0x3F;
    temp_2_143->unk8 = 0xE;
    temp_2_143->unk10 = 0;
    D_00160F00[0] = temp_4_144;
}
#endif /* NON_MATCHING */
