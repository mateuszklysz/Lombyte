#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/video/decoder/callbacks/video_callback/FUN_0023b5f0.s", FUN_0023b5f0);
#else
#include "types.h"
struct M2c_arg1 {
    u8 pad_0[0x8];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 pad_14[0x4];
    s32 unk18;
};

struct M2c_arg2 {
    u8 pad_0[0x50008];
    s32 unk50008;
};

extern s32 D_0016120C;
extern u8 D_001E8B08[];
extern s32 func_0023AB78();
extern s32 func_0023B810();
extern s32 func_0023CBF0();
extern s32 func_0023CC10();
extern s32 func_0023CC98();
s32 FUN_0023b5f0(s32 arg0, struct M2c_arg1 *arg1, struct M2c_arg2 *arg2) {    s32 sp0;
u8 sp_slot[0x80];    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_16_25;
    s32 temp_16_29;
    s32 temp_17_23;
    s32 temp_17_32;
    s32 temp_19_21;
    s32 temp_2_47;

    temp_19_21 = arg1->unk8;
    temp_17_23 = arg1->unkC;
    temp_16_25 = (((__typeof__(arg2))((u32)(arg2) + (u32)(arg2)))->unk50008) - temp_19_21;
    temp_16_29 = (temp_17_23 < temp_16_25) ? temp_17_23 : temp_16_25;
    temp_17_32 = temp_17_23 - temp_16_29;
    func_0023CBF0(D_0016120C + 0xD9048, sp_slot, &sp4, &sp8, &spC);
    temp_2_47 = func_0023B810((sp0 & 0x0FFFFFFF) | 0x20000000, sp4, (sp8 & 0x0FFFFFFF) | 0x20000000, spC, temp_19_21, temp_16_29, arg2, temp_17_32);
    if (temp_2_47 > 0) {
        if (func_0023CC98(D_0016120C + 0xD9048, arg1->unk10, arg1->unk18, sp0, temp_2_47) == 0) {
            func_0023AB78(D_001E8B08);
        }
    }
    func_0023CC10(D_0016120C + 0xD9048, temp_2_47);
    return temp_2_47 > 0;
}
#endif /* NON_MATCHING */
