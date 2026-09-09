/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 57.1875%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit InitTLB; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl InitTLB\n"
    ".type InitTLB, @function\n"
    "InitTLB:\n"
    "addiu      $29, $29, -0x10\n"
    "sd         $31, 0x0($29)\n"
    "jal        GetMemorySize\n"
    "nop\n"
    "lui        $3, (0x2000000 >> 16)\n"
    "bne        $2, $3, .L0011D1CC\n"
    "nop\n"
    "jal        InitTLB32MB\n"
    "nop\n"
    "b          .L0011D1D8\n"
    "ld        $31, 0x0($29)\n"
    ".L0011D1CC:\n"
    "jal        _InitTLB\n"
    "nop\n"
    "ld         $31, 0x0($29)\n"
    ".L0011D1D8:\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x10\n"
    ".size InitTLB, .-InitTLB\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 GetMemorySize();
extern s32 InitTLB32MB();
extern s32 _InitTLB();
void InitTLB(void) {
    if (GetMemorySize() == 0x02000000) {
        InitTLB32MB();
        return;
    }
    _InitTLB();
}
#endif /* NON_MATCHING */
