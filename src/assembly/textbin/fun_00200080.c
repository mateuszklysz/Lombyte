#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200080/FUN_00200080.s", FUN_00200080);
#else
#include "rnc/assembly_textbin_fun_00200080_types.h"
#include "types.h"












extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001FFA10();
void FUN_00200080(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s64 arg5) {
    s64 sp0;
    s32 temp_22_42;
    s32 temp_23_45;
    struct M2c_temp_10_38 *temp_10_38;
    struct M2c_temp_17_55 *temp_17_55;
    struct M2c_temp_2_54 *temp_2_54;

    temp_10_38 = D_0019A3E8.unk24 + (*(s16 *)((u8 *)((arg0 * 4) + D_0019A3E8.unk20) + 0x2) * 8);
    D_00160F00->unk0 = 0x10000005;
    temp_22_42 = 1 << temp_10_38->unk7;
    temp_23_45 = 1 << temp_10_38->unk6;
    D_00160F00->unk4 = 0;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000005;
    temp_2_54 = D_00160F00;
    temp_17_55 = ((u8 *)temp_2_54 + (0x10));
    D_00160F00 = temp_17_55;
    temp_2_54->unk10 = (s64) ((0xE800 << 0x2F) | 0x8001);
    temp_17_55->unk8 = 0x05353106;
    sp0 = (s64) &D_0019A3E8;
    temp_17_55->unk10 = func_001FFA10(temp_10_38, 0x10000005);
    temp_17_55->unk20 = (s64) ((arg5 << 0x18) | 0x7F7F7F);
    temp_17_55->unk18 = 0x156;
    temp_17_55->unk28 = 0;
    temp_17_55->unk38 = (s64) ((temp_22_42 << 0x14) + (temp_23_45 * 0x10));
    temp_17_55->unk30 = (s64) (((arg1 + D_0013E500.unk10) - 8) | (((arg2 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_17_55->unk48 = 0;
    temp_17_55->unk40 = (s64) (((arg1 + arg3 + D_0013E500.unk10) - 8) | (((arg2 + arg4 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    D_00160F00 += 0x50;
}
#endif /* NON_MATCHING */
