/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscallFFE6
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel syscall veneer ffe6; no C wrapper preserves the ABI body. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_ffe6/InvokeKernelSyscallFFE6.s", InvokeKernelSyscallFFE6);
