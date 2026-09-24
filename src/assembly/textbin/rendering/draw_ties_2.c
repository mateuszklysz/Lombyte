#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/draw_ties_2/FUN_00235990.s", FUN_00235990);
#else
#include "types.h"
struct M2c_D_0018A2B0 {
    u8 pad_0[0x18];
    s32 unk18;
};

struct M2c_temp_2_140 {
    u8 pad_0[0x24];
    u16 unk24;
};

struct M2c_temp_2_18 {
    u8 pad_0[0x24];
    u16 unk24;
};

struct M2c_temp_2_79 {
    u8 pad_0[0x24];
    u16 unk24;
};

struct M2c_temp_2_95 {
    u8 pad_0[0x24];
    u16 unk24;
};

extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern s32 D_00160F00;
extern u8 D_00160F30[];
extern u8 D_00160F40[];
extern s32 D_00160F4C;
extern s32 D_00160F68;
extern struct M2c_D_0018A2B0 D_0018A2B0;
extern u8 D_001DF030[];
extern u8 D_001E1700[];
extern u8 D_001E2A00[];
extern u8 D_001E3000[];
extern u8 D_001E3200[];
extern u8 D_001E3E00[];
extern u8 D_001E4200[];
extern u8 D_001E4400[];
extern void FlushCache();
extern void WriteDmaChannel();
extern void func_001F21B0();
extern void func_001F21B8();
extern void func_001F98D0();
extern void func_00235640();
extern void func_00235BE8();
void draw_ties_2(void) __asm__("FUN_00235990");

void draw_ties_2(void) {
    s32 var_5_135;
    s32 var_5_71;
    s32 var_5_91;
    s32 var_6_7;
    void **var_5_16;
    void **var_6_138;
    void **var_6_77;
    void **var_6_93;
    struct M2c_temp_2_140 *temp_2_140;
    struct M2c_temp_2_18 *temp_2_18;
    struct M2c_temp_2_79 *temp_2_79;
    struct M2c_temp_2_95 *temp_2_95;

    var_6_7 = 1;
    if (D_00160F4C > 1) {
        var_5_16 = D_001E1700 + 4;
        do {
            temp_2_18 = *var_5_16;
            var_6_7 += 2;
            var_5_16 += 8;
            temp_2_18->unk24 = (u16) (temp_2_18->unk24 | 8);
        } while (var_6_7 < D_00160F4C);
    }
    *(s32 *)0x160F68 = *(s32 *)0x160F00;
    D_0015EE74 = D_0015EE78;
    *(s32 *)0x160F00 += 0x10;
    func_001F21B8(D_00160F30, 1, var_6_7, D_00160F4C);
    if (D_0018A2B0.unk18 != 0) {
        FlushCache(0);
        func_00235BE8();
        WriteDmaChannel(D_001E4400, 0x3600, 0x40);
    }
    func_00235640();
    func_001F98D0(D_001E4200, D_001E3000, 0x200);
    func_001F98D0(D_001E3E00, D_001E2A00, 0x400);
    var_5_71 = 1;
    if (D_00160F4C > 1) {
        var_6_77 = D_001E1700 + 4;
        do {
            temp_2_79 = *var_6_77;
            var_5_71 += 2;
            var_6_77 += 8;
            temp_2_79->unk24 = (u16) (temp_2_79->unk24 & ~8);
        } while (var_5_71 < D_00160F4C);
    }
    var_5_91 = 0;
    if (D_00160F4C > 0) {
        var_6_93 = D_001E1700;
        do {
            temp_2_95 = *var_6_93;
            var_5_91 += 2;
            var_6_93 += 8;
            temp_2_95->unk24 = (u16) (temp_2_95->unk24 | 8);
        } while (var_5_91 < D_00160F4C);
    }
    *(s32 *)0x160F68 = *(s32 *)0x160F00;
    D_0015EE74 = D_0015EE78;
    *(s32 *)0x160F00 += 0x10;
    if (D_0018A2B0.unk18 != 0) {
        FlushCache(0, D_0018A2B0.unk18);
        func_00235BE8();
        WriteDmaChannel(D_001E3200, 0x3600, 0x40);
    }
    func_001F21B8(D_00160F40, 5);
    func_00235640();
    var_5_135 = 0;
    if (D_00160F4C > 0) {
        var_6_138 = D_001E1700;
        do {
            temp_2_140 = *var_6_138;
            var_5_135 += 2;
            var_6_138 += 8;
            temp_2_140->unk24 = (u16) (temp_2_140->unk24 & ~8);
        } while (var_5_135 < D_00160F4C);
    }
    func_001F98D0(*(s32 *)0x160F00, D_001DF030, 0x20, D_00160F4C);
    func_001F21B0(D_00160F40, 5);
}
#endif /* NON_MATCHING */
