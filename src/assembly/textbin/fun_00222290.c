/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00222290
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00222290/FUN_00222290.s", FUN_00222290);
#else
#include "rnc/assembly_textbin_fun_00222290_types.h"
#include "types.h"






extern u32 D_0013CAE4[];
extern struct M2c_D_0013D408 D_0013D408;
extern u32 D_0013E05A[];
extern struct M2c_D_0013F350 D_0013F350;
extern u8 D_0014BF08[];
extern u32 D_0015EEA0[];
extern u32 D_0015EEB0[];
extern u8 D_001D4EC0[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u32 D_001D5BF8[];
extern s32 func_001F4A58();
extern s32 func_001F96F8();
extern s32 func_00209298();
extern s32 func_0020B178();
extern s32 func_00226B08();
extern s32 func_00226F50();
extern s32 func_0022E188();
s32 FUN_00222290(void) {
u8 sp_slot[0x40];    s32 var_5_42;
    s32 var_5_60;
    u8 *temp_4_46;
    u8 *temp_4_63;
    u8 temp_16_43;
    u8 temp_3_47;
    u8 temp_3_64;

    if (!(D_0013CAE4[0] & 0x20)) {
        goto block_5;
    }
    if (D_0015EEB0[0] == 1) {
        goto block_3;
    }
    if (D_0015EEB0[0] != 0x10) {
        goto block_4;
    }
block_3:
    D_001D5BF8[0] = D_001D4EC0;
    goto block_11;
block_4:
    func_00226B08(-1);
    func_0022E188(0);
    D_0013E05A[0] = 1;
    goto block_11;
block_5:
    if (!(D_0013CAE4[0] & 0x40)) {
        goto block_11;
    }
    var_5_42 = 0;
    temp_16_43 = D_0013D408.unk1D;
loop_7:
    temp_4_46 = sp_slot + var_5_42;
    temp_3_47 = *(var_5_42 + D_0014BF08);
    var_5_42 += 1;
    *temp_4_46 = temp_3_47;
    if (var_5_42 < 4) {
        goto loop_7;
    }
    func_00209298(D_001D5BF0.unkE0, var_5_42, D_0014BF08);
    D_0013D408.unk1D = temp_16_43;
    var_5_60 = 0;
loop_9:
    temp_4_63 = var_5_60 + D_0014BF08;
    temp_3_64 = *(sp_slot + var_5_60);
    var_5_60 += 1;
    *temp_4_63 = temp_3_64;
    if (var_5_60 < 4) {
        goto loop_9;
    }
    D_0015EEA0[0] = 1;
    func_0020B178(0, -1, D_0014BF08);
    func_00226F50();
    func_001F4A58(func_001F96F8(0x10));
    D_0013F350.unk20B1 = 1;
    return -1;
block_11:
    return 0;
}
#endif /* NON_MATCHING */
