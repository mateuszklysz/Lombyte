#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa298/FUN_001fa298.s", FUN_001fa298);
#else
#include "rnc/assembly_textbin_fun_001fa298_types.h"
#include "types.h"




void FUN_001fa298(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
    arg0->unk0 = (s64) arg1->unk0;
    arg0->unk10 = (s64) arg1->unk10;
    arg0->unk20 = (s64) arg1->unk20;
    /* m2c-unknown:  unknown instruction: sqc2 $vf0, 0x30($a0)  */
}

extern void func_001FA298(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) __attribute__((alias("FUN_001fa298")));
#endif /* NON_MATCHING */
