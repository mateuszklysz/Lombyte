/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscall004E
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel syscall veneer 004e; no C wrapper preserves the ABI body. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_004e/InvokeKernelSyscall004E.s", InvokeKernelSyscall004E);
