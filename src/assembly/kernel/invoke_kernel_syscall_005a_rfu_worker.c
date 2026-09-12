/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: InvokeKernelSyscall005A_RfuWorker
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact RFU worker kernel syscall veneer (syscall 0x5A). */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/invoke_kernel_syscall_005a_rfu_worker/InvokeKernelSyscall005A_RfuWorker.s", InvokeKernelSyscall005A_RfuWorker);
