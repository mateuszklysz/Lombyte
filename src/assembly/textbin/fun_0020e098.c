#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020e098/FUN_0020e098.s", FUN_0020e098);
#else
#include "rnc/assembly_textbin_fun_0020e098_types.h"
#include "types.h"


void FUN_0020e098(struct M2c_arg0 *arg0) {
    u16 temp_8_5;

    temp_8_5 = arg0->unk34;
    /* m2c-unknown:  unknown instruction: pref 0x0, 0x40($a0)  */
    if (arg0->unk20 >= 0) {
        /* m2c-unknown:  unknown instruction: lqc2 $vf20, 0xc0($t9)  */
        /* m2c-unknown:  unknown instruction: lqc2 $vf21, 0xd0($t9)  */
        /* m2c-unknown:  unknown instruction: lqc2 $vf22, 0xe0($t9)  */
        /* m2c-unknown:  unknown instruction: vmove.xyzw $vf23, $vf0  */
        func_0020DF30(arg0->unk52, arg0->unk53, temp_8_5 & 0x8000, temp_8_5);
    }
}

extern void func_0020E098(struct M2c_arg0 *arg0) __attribute__((alias("FUN_0020e098")));
#endif /* NON_MATCHING */
