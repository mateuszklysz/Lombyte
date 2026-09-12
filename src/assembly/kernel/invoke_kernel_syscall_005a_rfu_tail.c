/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscall005A_RfuTail
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact RFU tail kernel syscall veneer (syscall 0x5A). */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_005a_rfu_tail/InvokeKernelSyscall005A_RfuTail.s", InvokeKernelSyscall005A_RfuTail);
