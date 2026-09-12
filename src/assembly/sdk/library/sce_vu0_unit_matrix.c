/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: sceVu0UnitMatrix
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceVu0UnitMatrix; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sce_vu0_unit_matrix/sceVu0UnitMatrix.s", sceVu0UnitMatrix);
#else
#include "types.h"

void sceVu0UnitMatrix(s32 arg0) {
    /* m2c-unknown:  unknown instruction: vsub.xyzw $vf4, $vf0, $vf0  */
    /* m2c-unknown:  unknown instruction: vadd.w $vf4, $vf4, $vf0  */
    /* m2c-unknown:  unknown instruction: vmr32.xyzw $vf5, $vf4  */
    /* m2c-unknown:  unknown instruction: vmr32.xyzw $vf6, $vf5  */
    /* m2c-unknown:  unknown instruction: vmr32.xyzw $vf7, $vf6  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf4, 0x30($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x20($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf6, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf7, ($a0)  */
}
#endif /* NON_MATCHING */
