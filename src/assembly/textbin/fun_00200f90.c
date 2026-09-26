#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200f90/FUN_00200f90.s", FUN_00200f90);
#else
#include "types.h"

struct G_d_0013E500 {
    u8 pad_0[0x10];
    s32 unk10;
    s32 unk14;
};

struct G_d_00160F00 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s64 unk10;
    s64 unk18;
    s64 unk20;
    s64 unk28;
    s64 unk30;
    s64 unk38;
};

extern struct G_d_0013E500 D_0013E500;
extern struct G_d_00160F00 *D_00160F00[];

void FUN_00200f90(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s64 arg4, s32 arg5) {
    struct G_d_00160F00 *p;
    s64 temp_5_41;

    D_00160F00[0]->unk0 = 0x10000003;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = 0x50000003;
    p = D_00160F00[0];
    D_00160F00[0] = (u8 *)p + 0x10;
    p->unk10 = ((s64)0x8800 << 47) | 1;
    p->unk18 = 0x4410;
    p->unk20 = 0x46;
    p->unk28 = arg4;
    if (arg5 != 0) {
        temp_5_41 = arg4 << 32;
        p->unk30 = (s64)((arg0 + D_0013E500.unk10) - 8) | ((s64)((arg1 + D_0013E500.unk14) - 8) << 16) | temp_5_41;
        p->unk38 = (s64)((arg2 + D_0013E500.unk10) - 8) | ((s64)((arg3 + D_0013E500.unk14) - 8) << 16) | temp_5_41;
    } else {
        temp_5_41 = arg4 << 32;
        p->unk30 = ((arg0 * 0x10) + D_0013E500.unk10 - 0x10) | (((arg1 * 0x10) + D_0013E500.unk14 - 0x10) << 16) | temp_5_41;
        p->unk38 = ((arg2 * 0x10) + D_0013E500.unk10 - 0x10) | (((arg3 * 0x10) + D_0013E500.unk14 - 0x10) << 16) | temp_5_41;
    }
    D_00160F00[0] = (u8 *)D_00160F00[0] + 0x30;
}
#endif /* NON_MATCHING */
