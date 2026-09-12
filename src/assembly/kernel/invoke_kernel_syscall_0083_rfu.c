/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscall0083_Rfu
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact RFU kernel syscall veneer (syscall 0x83). */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_0083_rfu/InvokeKernelSyscall0083_Rfu.s", InvokeKernelSyscall0083_Rfu);
