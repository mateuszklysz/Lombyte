#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00239160/FUN_00239160.s", FUN_00239160);
#else
#include "types.h"

struct M2c_D_001E63C0 {
    u8 pad_0[0x40];
    s32 unk40;
    u8 pad_44[0x14];
    s32 unk58;
    s32 unk5C;
};

struct Item { s32 a0; s32 a4; u16 a8; u16 aA; u16 aC; u16 aE; u8 pad_10[8]; };

extern struct Item D_001DFFB0[];
extern s32 D_0013D428[];
extern u8 D_0013D4E3[];
extern s32 D_0015ED98[];
extern struct M2c_D_001E63C0 D_001E63C0;
extern void func_001FB8F0();
extern s32 func_001FDD10(s32);
extern s32 func_001F6B88(s32, s32, u64, s32, s32);

void FUN_00239160(void) {
    s32 offs;
    s32 flag;
    s32 i;
    u8 *rows;
    u16 v;
    s32 w;
    s32 id;

    func_001FB8F0(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    if (D_001E63C0.unk5C != 0) {
        offs = D_001E63C0.unk58 * 0x14;
        rows = (u8 *)&D_001E63C0 + 0xD0;
        flag = *(s32 *)((u8 *)&D_001E63C0 + offs + 0xD4);
        if (flag == 1) {
            i = *(volatile s32 *)(rows + offs);
            if (D_0013D428[i] < (s32)D_001DFFB0[i].aE) {
                if (flag == 1) {
                    if (D_001E63C0.unk40 != 0) {
                        v = D_001DFFB0[*(volatile s32 *)(rows + offs)].aA;
                    } else {
                        v = D_001DFFB0[*(volatile s32 *)(rows + offs)].a8;
                    }
                    if (D_0015ED98[0] >= (s32)v) {
                        id = 0x4EE0;
                    } else {
                        return;
                    }
                } else {
                    goto not1;
                }
            } else {
                return;
            }
        } else {
not1:
            if (D_0013D4E3[0] != 0) {
                w = D_001DFFB0[*(volatile s32 *)(rows + offs)].a4;
            } else {
                w = D_001DFFB0[*(volatile s32 *)(rows + offs)].a0;
            }
            if (D_0015ED98[0] < w) {
                return;
            }
            id = 0x524B;
        }
    } else {
        goto early;
    }
    func_001F6B88(0x28, 0x14, 0x80F0F0F0, func_001FDD10(id), -1);
    return;
early:
    func_001F6B88(0x28, 0x14, 0x80F0F0F0, func_001FDD10(0x4EE0), -1);
}
#endif /* NON_MATCHING */
