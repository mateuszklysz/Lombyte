/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 59.5987%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021f688/FUN_0021f688.s", FUN_0021f688);
#else
#include "rnc/assembly_textbin_fun_0021f688_types.h"
#include "types.h"




extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 func_001153FC();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F61E8();
extern s32 func_001F61F8();
extern s32 func_001F6530();
extern s32 func_001F6FD0();
extern s32 func_001F75F0();
extern s32 func_001FDD10();
extern s32 func_0020BC00();
extern s32 func_0021F8E8();
extern s32 func_00233980();
s32 FUN_0021f688(struct M2c_arg0 *arg0) {
u8 sp_slot[0xF0];    s32 sp20;
    u16 sp22;
    u16 sp26;
    s16 sp28;
    s16 sp2A;
    s16 sp30;
    s16 sp32;
    s32 sp40;
    s32 sp44;
u8 *sp48;
    s16 temp_7_117;
    s32 *var_30_49;
    s32 temp_16_72;
    s32 temp_16_82;
    s32 temp_16_90;
    s32 temp_18_63;
    s32 temp_2_25;
    s32 temp_6_95;
    s32 var_19_14;
    s32 var_21_12;

    var_21_12 = 0x18;
    var_19_14 = 0;
    sp40 = 0;
    func_001F4280(0);
    temp_2_25 = func_0020BC00(0x70000000, &sp40, 0, 0);
    sp44 = temp_2_25;
    func_00233980(0x42, 0x44);
    func_00233980(0x47, 0x10B);
    func_001F6530(4, 4, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4F59), -1);
    if (temp_2_25 > 0) {
        sp48 = ((u8 *)arg0 + (0x30));
        var_30_49 = (s32 *)0x70000000;
        do {
            temp_18_63 = *(sp48 + (D_001A00F0.unk224 * 4)) == var_19_14;
            if (temp_18_63 != 0) {
                func_001F61F8();
            }
            temp_16_72 = arg0->unk20 - 0x11;
            temp_16_82 = func_001F6FD0(0x10, var_21_12, temp_16_72, 0x3E8, (temp_18_63 != 0) ? 0x8020FFFF : 0x80FFA888, func_001FDD10(*var_30_49), -1);
            if (temp_18_63 != 0) {
                func_001F61E8();
            }
            temp_16_90 = (temp_16_82 >= 0x11) ? 2 : 1;
            temp_6_95 = (sp40 >> var_19_14) & 1;
            var_19_14 += 1;
            func_0021F8E8(9, ((temp_16_90 ^ 2) != 0) ? (var_21_12 + 0xA) : (var_21_12 + 0x10), temp_6_95);
            var_30_49 += 4;
            var_21_12 += temp_16_90 * 0x10;
        } while (var_19_14 < sp44);
    }
    if (sp40 < 0) {
        func_001153FC(&sp20, 0, 0x18);
        temp_7_117 = var_21_12 + 8;
        sp22 = (u16) arg0->unk24;
        sp2A = temp_7_117;
        sp30 = 0x10;
        sp32 = 1;
        sp26 = (u16) arg0->unk20;
        sp28 = (s16) ((s32) arg0->unk24 >> 1);
        /* m2c-unknown:  unknown instruction: ldl $a2, 0x27($sp_slot)  */
        /* m2c-unknown:  unknown instruction: ldr $a2, 0x20($sp_slot)  */
        /* m2c-unknown:  unknown instruction: ldl $v0, 0x2f($sp_slot)  */
        /* m2c-unknown:  unknown instruction: ldr $v0, 0x28($sp_slot)  */
        /* m2c-unknown:  unknown instruction: ldl $v1, 0x37($sp_slot)  */
        /* m2c-unknown:  unknown instruction: ldr $v1, 0x30($sp_slot)  */
        /* m2c-unknown:  unknown instruction: sdl $a2, 0x7($sp_slot)  */
        /* m2c-unknown:  unknown instruction: sdl $v0, 0xf($sp_slot)  */
        /* m2c-unknown:  unknown instruction: sdr $v0, 0x8($sp_slot)  */
        /* m2c-unknown:  unknown instruction: sdl $v1, 0x17($sp_slot)  */
        /* m2c-unknown:  unknown instruction: sdr $v1, 0x10($sp_slot)  */
        func_001F75F0(sp_slot, (0x8020 << 0x10) | 0xFFFF, func_001FDD10(0x523D, 1, 0 /*  unknown instruction: sdr $a2, ($sp_slot)  */, temp_7_117), -1);
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
