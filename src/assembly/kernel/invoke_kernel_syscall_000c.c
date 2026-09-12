/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscall000C
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel syscall veneer 000c; no C wrapper preserves the ABI body. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_000c/InvokeKernelSyscall000C.s", InvokeKernelSyscall000C);
