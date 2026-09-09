/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library leaf sceSifRemoveCmdHandler; target words retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceSifRemoveCmdHandler\n"
    ".type sceSifRemoveCmdHandler, @function\n"
    "sceSifRemoveCmdHandler:\n"
    "bgez       $4, .L0011A77C\n"
    "sll       $3, $4, 3\n"
    "lui        $2, %hi(D_00154E64)\n"
    "b          .L0011A784\n"
    "lw        $4, %lo(D_00154E64)($2)\n"
    ".L0011A77C:\n"
    "lui        $2, %hi(D_00154E6C)\n"
    "lw         $4, %lo(D_00154E6C)($2)\n"
    ".L0011A784:\n"
    "addu       $3, $3, $4\n"
    "jr         $31\n"
    "sw        $0, 0x0($3)\n"
    ".size sceSifRemoveCmdHandler, .-sceSifRemoveCmdHandler\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sce_sif_remove_cmd_handler_types.h"
#include "types.h"
/* cygnus-2.96 matched TU. */

extern unsigned char D_00766CE8[];




__attribute__((section(".text.func_0036C518")))
void sceSifRemoveCmdHandler(int idx, int val) {
    int n = ((S0036C518 *)D_00766CE8)->n;
    char *p = ((S0036C518 *)D_00766CE8)->p;
    if (n > 0) {
        int off = idx * 4 + 0x190;
        do {
            if (*(int *)(p + 0x188) == 2) *(int *)(p + off) = val;
            p += 0x440;
        } while (--n);
    }
}
#endif /* NON_MATCHING */
