/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscallFF02
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel syscall veneer ff02; no C wrapper preserves the ABI body. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_ff02/InvokeKernelSyscallFF02.s", InvokeKernelSyscallFF02);
