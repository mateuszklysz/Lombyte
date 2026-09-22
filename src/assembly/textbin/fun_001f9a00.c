#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9a00/FUN_001f9a00.s", FUN_001f9a00);
#else
#include "types.h"

void FUN_001f9a00(s32 arg0) {
    /* m2c-unknown:  unknown instruction: vmr32.xyzw $vf1, $vf0  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
}
#endif /* NON_MATCHING */
