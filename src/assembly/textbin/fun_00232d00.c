#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00232d00/FUN_00232d00.s", FUN_00232d00);
#else
#include "types.h"
struct M2c_D_001DD1A0 {
    u8 pad_0[0x2C];
    s32 unk2C;
};

struct M2c_temp_2_65 {
    u8 pad_0[0x4];
    s32 unk4;
    u8 pad_8[0x28];
    s32 unk30;
    s32 unk34;
};

struct M2c_var_3_69 {
    s32 unk0;
    s32 unk4;
};

extern struct M2c_D_001DD1A0 D_001DD1A0;
extern u8 D_001DD1A8[];
extern u8 D_001DD1D8[];
extern s32 SceSifCheckStatRpc();
extern s32 sceSifBindRpc();
extern s32 sceSifCallRpc();
void FUN_00232d00(void) {    s32 sp14;
    s32 sp10;
    struct M2c_var_3_69 *var_3_69;
    s32 var_4_41;
    s32 var_4_72;
    struct M2c_temp_2_65 *temp_2_65;

loop_1:
    if (sceSifBindRpc(D_001DD1A8, 0x11, 1) < 0) {
loop_3:
        goto loop_3;
    }
    do {

    } while (SceSifCheckStatRpc(D_001DD1A8) != 0);
    if (D_001DD1A0.unk2C == 0) {
        var_4_41 = 0xFFFE;
        do {
            var_4_41 -= 1;
        } while (var_4_41 != -1);
        goto loop_1;
    }
    sceSifCallRpc(D_001DD1A8, 2, 0, 0, 0, &sp10, 0x10, 0, 0);
    temp_2_65 = ((u8 *)D_001DD1A8 - (u8 *)8);
    *(s32 *)((u8 *)((u8 *)D_001DD1A8 - (u8 *)0x8)) = sp10;
    var_3_69 = D_001DD1D8;
    temp_2_65->unk4 = sp14;
    temp_2_65->unk30 = sp10;
    var_4_72 = 0x3F;
    temp_2_65->unk34 = 0;
    do {
        var_3_69->unk0 = 0;
        var_4_72 -= 1;
        var_3_69->unk4 = 0;
        var_3_69 += 0x10;
    } while (var_4_72 >= 0);
}
#endif /* NON_MATCHING */
