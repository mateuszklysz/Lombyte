#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00238f08/FUN_00238f08.s", FUN_00238f08);
#else
#include "types.h"
struct M2c_D_001E63C0 {
    u8 pad_0[0x40];
    s32 unk40;
    u8 pad_44[0x14];
    s32 unk58;
    s32 unk5C;
};

struct M2c_temp_2_41 {
    u8 pad_0[0xD0];
    s32 unkD0;
    s32 unkD4;
};

extern u8 D_0013D428[];
extern s32 D_0013D4E3;
extern s32 D_0015ED98;
extern u8 D_001DFFB0[];
extern struct M2c_D_001E63C0 D_001E63C0;
extern s32 func_001F75F0();
extern s32 func_001FB8F0();
extern s32 func_001FDD10();
extern s32 memset();
void FUN_00238f08(s32 arg0, s16 arg1, s16 arg2) {    u16 spE;
    u8 sp_slot[0x50]; s16 sp10;
    u16 sp12;
    s32 *var_5_29;
    s32 temp_3_47;
    s32 temp_4_68;
    s32 var_3_95;
    s32 var_6_61;
    u16 var_4_82;
    struct M2c_temp_2_41 *temp_2_41;
    func_001FB8F0(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    memset(sp_slot, 0, 0x18);
    var_5_29 = (void *)1;
    sp10 = 0x10;
    sp12 = 1;
    if (D_001E63C0.unk5C != 0) {
        temp_2_41 = ((u8 *)&D_001E63C0) + (D_001E63C0.unk58 * 0x14);
        if (temp_2_41->unkD4 == 1) {
            var_5_29 = D_001DFFB0;
            temp_3_47 = temp_2_41->unkD0;
            if (*(s32 *)((temp_3_47 * 4) + D_0013D428) >= (s32) *(s32 *)((u8 *)((temp_3_47 * 0x18) + D_001DFFB0) + 0xE)) {
                var_6_61 = 0x5233;
            } else {
                goto block_5;
            }
        } else {
block_5:
            temp_4_68 = D_001E63C0.unk58 * 0x14;
            if (*(s32 *)((u8 *)(((u8 *)&D_001E63C0) + temp_4_68) + 0xD4) == 1) {
                var_5_29 = (void *)0x18;
                if (D_001E63C0.unk40 != 0) {
    ; /* m2c-unbalanced expression dropped */
                } else {
    ; /* m2c-unbalanced expression dropped */
                }
                var_3_95 = 0x5234;
            } else {
                var_5_29 = (void *)0x18;
                if (D_0013D4E3 != 0) {
    ; /* m2c-unbalanced expression dropped */
                } else {
                    var_4_82 = (u16) *((*(s32 *)((u8 *)(((u8 *)&D_001E63C0) + temp_4_68) + 0xD0) * 0x18) + D_001DFFB0);
                }
                var_3_95 = 0x524E;
            }
            var_6_61 = (D_0015ED98 >= (s32) var_4_82) ? var_3_95 : 0x5233;
        }
    } else {
        var_6_61 = 0x5234;
    }
    if (var_6_61 != 0) {
        sp12 |= 4;
        func_001F75F0(sp_slot, (0x80F0 << 0x10) | 0xF0F0, func_001FDD10(0x5234, (s16) var_5_29, var_6_61, &D_001E63C0), -1);
        sp12 ^= 4;
        func_001F75F0(sp_slot, (0x80F0 << 0x10) | 0xF0F0, func_001FDD10(0x5234, (s16) ((s32) (arg2 - (s16) spE) >> 1)), -1);
    }
}

extern void func_00238F08(s32 arg0, s16 arg1, s16 arg2) __attribute__((alias("FUN_00238f08")));
#endif /* NON_MATCHING */
