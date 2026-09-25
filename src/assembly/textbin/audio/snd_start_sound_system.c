#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/snd_start_sound_system/FUN_0012da28.s", FUN_0012da28);
#else
#include "types.h"
struct M2c_D_00137B00 {
    s32 unk0;
    u8 pad_4[0xC];
    s32 unk10;
};

struct M2c_D_0015EBC0 {
    u8 pad_0[0x24];
    s32 unk24;
};

struct M2c_D_0015EBE8 {
    u8 pad_0[0x24];
    s32 unk24;
};

extern u8 D_00133280[];
extern u8 D_00134280[];
extern u8 D_00135280[];
extern u8 D_00136280[];
extern u8 D_00137280[];
extern u8 D_001376C0[];
extern struct M2c_D_00137B00 D_00137B00;
extern u8 D_00153C50[];
extern u8 D_00153C78[];
extern struct M2c_D_0015EBC0 D_0015EBC0;
extern struct M2c_D_0015EBE8 D_0015EBE8;
extern s32 D_0015ECA0;
extern s32 D_0015ECA4;
extern s32 D_0015ECA8;
extern s32 D_0015ECAC;
extern s32 D_0015ECB0;
extern s32 D_0015ECB4;
extern s32 D_0015ECB8;
extern s32 D_0015ECBC;
extern s32 D_0015ECC8;
extern s32 D_0015ECD0;
extern s32 D_0015ECD8;
extern s32 D_0015ED00;
extern s32 func_0012E548();
extern s32 printf();
extern s32 sceSifBindRpc();
extern s32 sceSifInitRpc();
void FUN_0012da28(void) {
u8 sp_slot[0xB0];    s32 var_2_121;
    s32 var_2_70;

    D_0015ECA0 = D_00133280;
    D_0015ECA4 = D_00134280;
    D_0015ECB8 = D_00137280;
    D_0015ECBC = D_001376C0;
    D_0015ECB0 = D_00135280;
    D_0015ECB4 = D_00136280;
    sceSifInitRpc(0, D_00137280, D_001376C0, D_00135280, D_00136280);
loop_1:
    if (sceSifBindRpc(&D_0015EBC0, 0x123456, 0) < 0) {
        printf(D_00153C50, D_00153C78, 0x73);
loop_3:
        goto loop_3;
    }
    if (0x270F != -1) {
        var_2_70 = 0x270E;
loop_6:
        if (var_2_70 != -1) {
            var_2_70 -= 1;
            goto loop_6;
        }
    }
    if (D_0015EBC0.unk24 != 0) {
        D_0015ECC8 = 0;
        D_0015ECD0 = 0;
        D_0015ECD8 = 0;
        D_0015ED00 = 0;
loop_12:
        if (sceSifBindRpc(&D_0015EBE8, 0x123457, 0) < 0) {
            printf(D_00153C50, D_00153C78, 0x88);
loop_14:
            goto loop_14;
        }
        if (0x270F != -1) {
            var_2_121 = 0x270E;
loop_17:
            if (var_2_121 != -1) {
                var_2_121 -= 1;
                goto loop_17;
            }
        }
        if (D_0015EBE8.unk24 != 0) {
            *(s32 *)D_00133280 = 0;
            D_00137B00.unk0 = 0;
            *(s32 *)D_00134280 = 0;
            D_0015ECAC = 0xFFC;
            D_00137B00.unk10 = 0;
            D_0015ECA8 = 0xFFC;
            func_0012E548(0, 4, sp_slot, &D_00137B00);
            return;
        }
        goto loop_12;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
