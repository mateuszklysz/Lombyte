#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f0bd0/FUN_001f0bd0.s", FUN_001f0bd0);
#else
#include "types.h"
struct M2c_temp_9_12 {
    u8 pad_0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

extern s32 D_0015F000;
extern s32 D_0015F004;
extern u8 D_0015F008[];
extern u8 D_0018AB00[];
extern s32 sprintf();
void FUN_001f0bd0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_8_10;
    s32 temp_10_17;
    s32 temp_3_7;
    struct M2c_temp_9_12 *temp_9_12;

    temp_3_7 = D_0015F004 * 0x10;
    temp_8_10 = temp_3_7 + D_0018AB00;
    *temp_8_10 = arg0;
    temp_9_12 = D_0018AB00 + temp_3_7;
    temp_9_12->unk4 = arg1;
    temp_9_12->unk8 = arg2;
    temp_10_17 = D_0015F004 + 1;
    temp_9_12->unkC = (s32) D_0015F000;
    *(s32 *)0x15F004 = temp_10_17;
    D_0015F000 += sprintf(D_0015F000, D_0015F008, arg3, temp_8_10, temp_9_12, temp_10_17, D_0015F000) + 1;
}
#endif /* NON_MATCHING */
