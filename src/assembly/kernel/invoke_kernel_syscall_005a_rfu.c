/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscall005A_Rfu
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact RFU kernel syscall veneer (syscall 0x5A). */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_005a_rfu/InvokeKernelSyscall005A_Rfu.s", InvokeKernelSyscall005A_Rfu);
