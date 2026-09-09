/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 9.1463%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00226670/FUN_00226670.s", FUN_00226670);
#else
#include "types.h"
extern u32 D_00160350[];
extern u8 D_001D5E88[];
s32 FUN_00226670(void) {
    s32 *var_3_8;

    var_3_8 = D_001D5E88 + 0x38;
    do {
        /* m2c-unknown:  unknown instruction: ldl $v0, 0x3f($v1)  */
        /* m2c-unknown:  unknown instruction: ldr $v0, 0x38($v1)  */
        /* m2c-unknown:  unknown instruction: ldl $a1, 0x47($v1)  */
        /* m2c-unknown:  unknown instruction: ldr $a1, 0x40($v1)  */
        /* m2c-unknown:  unknown instruction: ldl $a2, 0x4f($v1)  */
        /* m2c-unknown:  unknown instruction: ldr $a2, 0x48($v1)  */
        /* m2c-unknown:  unknown instruction: ldl $a3, 0x57($v1)  */
        /* m2c-unknown:  unknown instruction: ldr $a3, 0x50($v1)  */
        /* m2c-unknown:  unknown instruction: sdl $v0, 0x7($v1)  */
        /* m2c-unknown:  unknown instruction: sdr $v0, ($v1)  */
        /* m2c-unknown:  unknown instruction: sdl $a1, 0xf($v1)  */
        /* m2c-unknown:  unknown instruction: sdr $a1, 0x8($v1)  */
        /* m2c-unknown:  unknown instruction: sdl $a2, 0x17($v1)  */
        /* m2c-unknown:  unknown instruction: sdr $a2, 0x10($v1)  */
        /* m2c-unknown:  unknown instruction: sdl $a3, 0x1f($v1)  */
        /* m2c-unknown:  unknown instruction: sdr $a3, 0x18($v1)  */
        /* m2c-unknown:  unknown instruction: ldl $v0, 0x5f($v1)  */
        /* m2c-unknown:  unknown instruction: ldr $v0, 0x58($v1)  */
        /* m2c-unknown:  unknown instruction: ldl $a1, 0x67($v1)  */
        /* m2c-unknown:  unknown instruction: ldr $a1, 0x60($v1)  */
        /* m2c-unknown:  unknown instruction: ldl $a2, 0x6f($v1)  */
        /* m2c-unknown:  unknown instruction: ldr $a2, 0x68($v1)  */
        /* m2c-unknown:  unknown instruction: sdl $v0, 0x27($v1)  */
        /* m2c-unknown:  unknown instruction: sdr $v0, 0x20($v1)  */
        /* m2c-unknown:  unknown instruction: sdl $a1, 0x2f($v1)  */
        /* m2c-unknown:  unknown instruction: sdr $a1, 0x28($v1)  */
        /* m2c-unknown:  unknown instruction: sdl $a2, 0x37($v1)  */
        /* m2c-unknown:  unknown instruction: sdr $a2, 0x30($v1)  */
        var_3_8 += 0x38;
    } while ((s32) var_3_8 < (s32) (D_001D5E88 + 0x1C0));
    D_00160350[0] -= 1;
    return 0;
}
#endif /* NON_MATCHING */
