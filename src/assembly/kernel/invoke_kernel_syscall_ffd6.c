/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscallFFD6
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel syscall veneer ffd6; no C wrapper preserves the ABI body. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_ffd6/InvokeKernelSyscallFFD6.s", InvokeKernelSyscallFFD6);
