#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002240c8/FUN_002240c8.s", FUN_002240c8);
#else
#include "types.h"
struct M2c_D_00186F40 {
    u8 pad_0[0x140];
    s32 unk140;
    s32 unk144;
    s32 unk148;
};

struct M2c_D_001D5BF0 {
    u8 pad_0[0x1C];
    s32 unk1C;
    u8 pad_20[0x80];
    s32 unkA0;
    s32 unkA4;
    u8 pad_A8[0x18];
    s32 unkC0;
    u8 pad_C4[0x4];
    u8 unkC8;
    u8 unkC9;
    u8 unkCA;
    u8 pad_CB[0x51];
    s32 unk11C;
    s32 unk120;
};

struct M2c_D_001D5DD0 {
    u8 pad_0[0x1];
    s32 unk1;
};

struct M2c_D_001D5E10 {
    u8 pad_0[0x1];
    s32 unk1;
};

struct M2c_D_001D5E50 {
    u8 pad_0[0x1];
    s32 unk1;
};

struct M2c_arg0 {
    u8 pad_0[0x44];
    s32 unk44;
    s32 unk48;
};

struct M2c_temp_16_57 {
    u8 pad_0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad_1C[0x18];
    s16 unk34;
    u8 pad_36[0x12];
    s32 unk48;
    u8 pad_4C[0x28];
    s32 unk74;
    struct M2c_temp_3_86 * unk78;
};

struct M2c_temp_2_108 {
    u8 pad_0[0x34];
    s16 unk34;
    u8 pad_36[0x3E];
    s32 unk74;
    s32 unk78;
};

struct M2c_temp_3_86 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern s32 D_0015FF4C;
extern u8 D_00186310[];
extern struct M2c_D_00186F40 D_00186F40;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern struct M2c_D_001D5DD0 D_001D5DD0;
extern struct M2c_D_001D5E10 D_001D5E10;
extern struct M2c_D_001D5E50 D_001D5E50;
extern u8 D_00224B60[];
extern s32 FillTransferWords();
extern s32 func_001E9410();
extern s32 func_00225490();
extern s32 func_00225AC0();
extern s32 func_00225C18();
extern s32 func_00226718();
extern void func_00224FC0();
s32 FUN_002240c8(struct M2c_arg0 *arg0) {
    s32 *var_18_21;
    s32 var_17_11;
    s32 var_3_58;
    s8 *var_2_59;
    struct M2c_temp_16_57 *temp_16_57;
    struct M2c_temp_2_108 *temp_2_108;
    struct M2c_temp_3_86 *temp_3_86;
    var_17_11 = 2;
    func_00225AC0(1);
    func_00226718();
    D_001D5BF0.unk120 = -1;
    var_18_21 = ((u8 *)&D_001D5BF0) + 0xB0;
    *(s32 *)0x15FF4C = -1;
    D_001D5BF0.unk11C = -1;
    D_001D5BF0.unkA0 = func_00225C18(1);
    D_001D5BF0.unkA4 = func_00225C18(1);
    D_001D5BF0.unkC9 = 0xFF;
    D_001D5BF0.unkC8 = 0xFF;
    D_001D5BF0.unkCA = 0;
    do {
        var_17_11 -= 1;
        *var_18_21 = func_00225C18(0);
        var_18_21 += 4;
    } while (var_17_11 >= 0);
    D_001D5DD0.unk1 = 0;
    D_001D5BF0.unk1C = -1;
    D_001D5E10.unk1 = 0;
    D_001D5E50.unk1 = 0;__asm__ volatile ("" : : "r" (&D_001D5BF0));
    
    temp_16_57 = func_00225490(0, &D_001D5E10, &D_001D5BF0);
    var_3_58 = 0x17;
    var_2_59 = ((u8 *)arg0) + 0xBB;
    do {
        *var_2_59 = 0;
        var_3_58 -= 1;
        (u32)var_2_59 -= 1;
    } while (var_3_58 >= 0);
    if (temp_16_57 != NULL) {
        arg0->unk44 = temp_16_57;
        temp_16_57->unk34 = 0;
        temp_3_86 = temp_16_57->unk78;
        temp_16_57->unk10 = (f32) (D_00186F40.unk140 + 4.0f);
        temp_16_57->unk14 = (f32) D_00186F40.unk144;
        temp_16_57->unk48 = 3.1415927f;
        temp_16_57->unk74 = D_00224B60;
        temp_16_57->unk18 = (f32) (D_00186F40.unk148 - 0.6f);
        temp_3_86->unk8 = 0;
        temp_3_86->unk0 = arg0;
        temp_3_86->unk4 = 0;
        D_001D5BF0.unkC0 = -1;
        FillTransferWords(D_00186310, 0, 0x40, D_00224B60, -1, &D_001D5BF0);
        func_001E9410(temp_16_57);
    }
    temp_2_108 = func_00225490(0x259);
    if (temp_2_108 != NULL) {
        *(s32 *)temp_2_108->unk78 = arg0;
        temp_2_108->unk74 = &func_00224FC0;
        temp_2_108->unk34 = 4;
    }
    arg0->unk48 = temp_2_108;
    return 0;
}

extern s32 func_002240C8(struct M2c_arg0 *arg0) __attribute__((alias("FUN_002240c8")));
#endif /* NON_MATCHING */
