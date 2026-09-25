#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021a1e0/FUN_0021a1e0.s", FUN_0021a1e0);
#else
#include "types.h"
struct M2c_D_001E8748 {
    u8 pad_0[0x18];
    s32 unk18;
};

struct M2c_var_6_47 {
    s32 unk0;
    u8 pad_4[0x1C];
    s32 unk20;
};

struct M2c_var_7_48 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern u8 D_0015EDB0[];
extern u8 D_0015EDC0[];
extern u8 D_001D3B10[];
extern struct M2c_D_001E8748 D_001E8748;
s32 FUN_0021a1e0(void) {
u8 sp_slot[0x40];    s32 sp38;
    struct M2c_var_7_48 *var_7_48;
    s32 temp_5_52;
    s32 var_8_49;
    s32 var_9_39;
    struct M2c_var_6_47 *var_6_47;

    /* m2c-unknown:  unknown instruction: ldl $a0, 0x7($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a0, ($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a1, 0xf($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a1, 0x8($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a2, 0x17($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a2, 0x10($a3)  */
    /* m2c-unknown:  unknown instruction: sdl $a0, 0x7($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $a0, ($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a1, 0xf($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $a1, 0x8($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a2, 0x17($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $a2, 0x10($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldl $a0, 0x1f($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a0, 0x18($a3)  */
    /* m2c-unknown:  unknown instruction: sdl $a0, 0x1f($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $a0, 0x18($sp_slot)  */
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x7($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, ($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a1, 0xf($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a1, 0x8($a3)  */
    /* m2c-unknown:  unknown instruction: ldl $a2, 0x17($a3)  */
    /* m2c-unknown:  unknown instruction: ldr $a2, 0x10($a3)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x27($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, 0x20($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a1, 0x2f($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $a1, 0x28($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a2, 0x37($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $a2, 0x30($sp_slot)  */
    sp38 = D_001E8748.unk18;
    var_9_39 = 0;
    var_6_47 = sp_slot;
    var_7_48 = D_001D3B10;
    var_8_49 = 0xB;
    do {
        temp_5_52 = var_6_47->unk0;
        if ((temp_5_52 != -1) && (*(temp_5_52 + D_0015EDC0) != 0)) {
            var_7_48->unk4 = (void *) (temp_5_52 + D_0015EDB0);
            var_9_39 += 1;
            var_7_48->unk0 = (s32) var_6_47->unk20;
            var_7_48->unk8 = 0x4F5A;
            var_7_48->unkC = 0x4F5B;
            var_7_48->unk10 = 0;
            var_7_48 += 0x14;
        }
        var_8_49 -= 1;
        var_6_47 += 4;
    } while (var_8_49 >= 0);
    *((var_9_39 * 0x14) + D_001D3B10) = 0;
    return 0;
}
#endif /* NON_MATCHING */
