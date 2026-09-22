#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200258/FUN_00200258.s", FUN_00200258);
#else
#include "rnc/assembly_textbin_fun_00200258_types.h"
#include "types.h"












extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00[];
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001FFA10();
void FUN_00200258(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp0;
    s64 sp10;
    s64 sp20;
    s64 temp_15_48;
    s32 temp_23_44;
    s64 temp_2_67;
    struct M2c_temp_12_39 *temp_12_39;
    struct M2c_temp_17_60 *temp_17_60;
    struct M2c_temp_3_59 *temp_3_59;

    temp_12_39 = D_0019A3E8.unk24 + (*(s16 *)((u8 *)((arg0 * 4) + D_0019A3E8.unk20) + 0x2) * 8);
    D_00160F00[0]->unk0 = 0x10000005;
    temp_23_44 = 1 << (temp_12_39->unk7 + 4);
    temp_15_48 = 1 << (temp_12_39->unk6 + 4);
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0x50000005;
    temp_3_59 = D_00160F00[0];
    temp_17_60 = ((u8 *)temp_3_59 + (0x10));
    D_00160F00[0] = temp_17_60;
    temp_3_59->unk10 = (s64) ((0xE800 << 0x2F) | 0x8001);
    temp_17_60->unk8 = 0x05353106;
    sp0 = arg5;
    sp10 = temp_15_48;
    sp20 = (s64) &D_0019A3E8;
    temp_2_67 = func_001FFA10();
    __asm__ volatile ("" : "+r" (temp_2_67));
    temp_17_60->unk20 = (s64) ((arg7 << 0x18) | 0x7F7F7F);
    temp_17_60->unk10 = temp_2_67;
    temp_17_60->unk18 = 0x156;
    temp_17_60->unk28 = (s64) (arg5 | (arg6 << 0x10));
    temp_17_60->unk38 = (s64) ((arg5 + temp_15_48) | ((arg6 + temp_23_44) << 0x10));
    temp_17_60->unk30 = (s64) (((arg1 + D_0013E500.unk10) - 8) | (((arg2 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_17_60->unk48 = 0;
    temp_17_60->unk40 = (s64) (((arg1 + arg3 + D_0013E500.unk10) - 8) | (((arg2 + arg4 + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    D_00160F00[0] += 0x50;
}
#endif /* NON_MATCHING */
