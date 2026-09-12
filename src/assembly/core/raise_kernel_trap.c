/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: RaiseKernelTrap
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Deliberate EE trap leaf used by the original error path. */

INCLUDE_ASM("config/us/expected/asm/assembly/core/raise_kernel_trap/RaiseKernelTrap.s", RaiseKernelTrap);
