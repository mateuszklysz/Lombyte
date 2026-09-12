/*
STATE: C_NON_MATCHING
SYMBOL: SceVu0RotMatrixY
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact Sony VU0 routine sceVu0RotMatrixY; target-derived body pending SDK source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_vu0_rot_matrix_y/SceVu0RotMatrixY.s", SceVu0RotMatrixY);
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_vu0_rot_matrix_y/SceVu0RotMatrixYBody.s", SceVu0RotMatrixYBody);
#else
#include "types.h"
/* func_00273EB8 — return (+0x1720 float) <= 0, via early-return on 0<x.  sn-2.95.3-136. */
__attribute__((section(".text.func_00273EB8")))
int SceVu0RotMatrixY(void *a0){
    if (!(0.0f < *(float *)((char *)a0 + 0x1720))) return 1; return 0;
}
#endif /* NON_MATCHING */
