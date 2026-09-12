/*
STATE: C_NON_MATCHING
SYMBOL: _sceSifLoadModuleBuffer
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _sceSifLoadModuleBuffer; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sif_rpc/sce_sif_load_module_buffer/_sceSifLoadModuleBuffer.s", _sceSifLoadModuleBuffer);
#else
#include "types.h"
struct M2c_D_00158200 {
    s32 unk0;
    s32 unk4;
};

struct M2c_var_4_34 {
    s64 unk0;
    s64 unk8;
    s64 unk10;
    s64 unk18;
};

extern struct M2c_D_00158200 D_00158200;
extern u8 D_00158400[];
extern s32 _lf_bind();
extern s32 func_0011CAE0();
extern s32 memcpy();
extern s32 sceSifCallRpc();
extern void memcpy();
s32 _sceSifLoadModuleBuffer(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 *var_5_40;
    s32 var_2_18;
    s32 var_7_38;
    struct M2c_var_4_34 *var_4_34;

    var_2_18 = 0xFFFF0000;
    if (_lf_bind() < 0) {
        goto block_20;
    }
    if (func_0011CAE0() == 0) {
        goto block_3;
    }
    return 0xFFFEFFFC;
block_3:
    D_00158200.unk4 = 0xFC;
    if (arg2 == 0) {
        goto block_13;
    }
    if (arg1 < 0xFD) {
        goto block_12;
    }
    var_4_34 = ((u8 *)&D_00158200 + 0x104);
    var_7_38 = arg2;
    if (!((arg2 | (s32) var_4_34) & 7)) {
        goto block_9;
    }
    var_5_40 = (void *)0x160000;
loop_7:
    /* m2c-unknown:  unknown instruction: ldl $v1, 0x7($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $v1, ($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a2, 0xf($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a2, 0x8($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a4, 0x17($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a4, 0x10($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a5, 0x1f($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a5, 0x18($a3)  */
    /* m2c-unknown:  unknown instruction: sdl $v1, 0x7($a0)  */
    /* m2c-unknown:  unknown instruction: sdr $v1, ($a0)  */
    /* m2c-unknown:  unknown instruction: sdl $a2, 0xf($a0)  */
    /* m2c-unknown:  unknown instruction: sdr $a2, 0x8($a0)  */
    /* m2c-unknown:  unknown instruction: sdl $a4, 0x17($a0)  */
    /* m2c-unknown:  unknown instruction: sdr $a4, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: sdl $a5, 0x1f($a0)  */
    /* m2c-unknown:  unknown instruction: sdr $a5, 0x18($a0)  */
    var_7_38 += 0x20;
    var_4_34 += 0x20;
    if (var_7_38 != (arg2 + 0xE0)) {
        goto loop_7;
    }
    goto block_11;
block_9:
    var_5_40 = D_00158400;
loop_10:
    var_4_34->unk0 = (s64) *(s32 *)((u8 *)var_7_38 + 0x0);
    var_4_34->unk8 = (s64) *(s32 *)((u8 *)var_7_38 + 0x8);
    var_4_34->unk10 = (s64) *(s32 *)((u8 *)var_7_38 + 0x10);
    var_4_34->unk18 = (s64) *(s32 *)((u8 *)var_7_38 + 0x18);
    var_7_38 += 0x20;
    var_4_34 += 0x20;
    if (var_7_38 != (arg2 + 0xE0)) {
        goto loop_10;
    }
block_11:
    /* m2c-unknown:  unknown instruction: ldl $a5, 0x7($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a5, ($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a6, 0xf($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a6, 0x8($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a2, 0x17($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a2, 0x10($a3)  */
    /* m2c-unknown:  unknown instruction: sdl $a5, 0x7($a0)  */
    /* m2c-unknown:  unknown instruction: sdr $a5, ($a0)  */
    /* m2c-unknown:  unknown instruction: sdl $a6, 0xf($a0)  */
    /* m2c-unknown:  unknown instruction: sdr $a6, 0x8($a0)  */
    /* m2c-unknown:  unknown instruction: sdl $a2, 0x17($a0)  */
    /* m2c-unknown:  unknown instruction: sdr $a2, 0x10($a0)  */
    var_4_34->unk18 = (s32 *) *(s32 *)((u8 *)var_7_38 + 0x18);
    D_00158200.unk4 = arg1;
    goto block_15;
block_12:
    memcpy(((u8 *)&D_00158200 + 0x104, arg2, arg1));
    D_00158200.unk0 = arg0;
    goto block_14;
block_13:
    D_00158200.unk4 = 0;
block_14:
    var_5_40 = D_00158400;
block_15:
    if (sceSifCallRpc(var_5_40, 6, 0, &D_00158200, 0x200, &D_00158200, 8, 0, 0) < 0) {
        goto block_17;
    }
    goto block_19;
block_17:
    return 0xFFFEFFFF;
block_19:
    var_2_18 = D_00158200.unk0;
    *arg3 = D_00158200.unk4;
block_20:
    return var_2_18;
}
#endif /* NON_MATCHING */
