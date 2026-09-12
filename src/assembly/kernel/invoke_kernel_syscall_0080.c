/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscall0080
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact kernel syscall veneer (syscall 0x80). */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_0080/InvokeKernelSyscall0080.s", InvokeKernelSyscall0080);
