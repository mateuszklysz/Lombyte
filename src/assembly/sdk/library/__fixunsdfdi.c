/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 53.1186%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __fixunsdfdi; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __fixunsdfdi\n"
    ".type __fixunsdfdi, @function\n"
    "__fixunsdfdi:\n"
    "addiu      $29, $29, -0x40\n"
    "daddu      $5, $0, $0\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $31, 0x30($29)\n"
    "sd         $18, 0x20($29)\n"
    "jal        dpcmp\n"
    "sd        $16, 0x0($29)\n"
    "bltz       $2, .L0011E4AC\n"
    "daddu     $2, $0, $0\n"
    "ori        $5, $0, 0xF7C0\n"
    "dsll32     $5, $5, 14\n"
    "jal        dpmul\n"
    "daddu     $4, $17, $0\n"
    "jal        dptoul\n"
    "daddu     $4, $2, $0\n"
    "dsll32     $16, $2, 0\n"
    "bltz       $16, .L0011E434\n"
    "andi      $2, $16, 0x1\n"
    "jal        __floatdidf\n"
    "daddu     $4, $16, $0\n"
    "b          .L0011E450\n"
    "daddu     $4, $17, $0\n"
    ".L0011E434:\n"
    "dsrl       $4, $16, 1\n"
    "jal        __floatdidf\n"
    "or        $4, $2, $4\n"
    "daddu      $4, $2, $0\n"
    "jal        dpadd\n"
    "daddu     $5, $4, $0\n"
    "daddu      $4, $17, $0\n"
    ".L0011E450:\n"
    "jal        dpsub\n"
    "daddu     $5, $2, $0\n"
    "daddu      $18, $0, $0\n"
    "daddu      $17, $2, $0\n"
    "daddu      $5, $18, $0\n"
    "jal        dpcmp\n"
    "daddu     $4, $17, $0\n"
    "bgez       $2, .L0011E494\n"
    "daddu     $4, $18, $0\n"
    "jal        dpsub\n"
    "daddu     $5, $17, $0\n"
    "jal        dptoul\n"
    "daddu     $4, $2, $0\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $2, $2, 0\n"
    "b          .L0011E4A8\n"
    "dsubu     $16, $16, $2\n"
    ".L0011E494:\n"
    "jal        dptoul\n"
    "daddu     $4, $17, $0\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $2, $2, 0\n"
    "daddu      $16, $16, $2\n"
    ".L0011E4A8:\n"
    "daddu      $2, $16, $0\n"
    ".L0011E4AC:\n"
    "ld         $31, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size __fixunsdfdi, .-__fixunsdfdi\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 __floatdidf();
extern s32 dpadd();
extern s32 dpcmp();
extern s32 dpmul();
extern s32 dpsub();
extern s32 dptoul();
s32 __fixunsdfdi(s32 arg0) {
    s32 temp_2_28;
    s32 temp_2_35;
    s32 var_16_51;
    s32 var_2_12;
    s32 var_2_22;
    s64 temp_2_17;
    u64 temp_16_19;

    var_2_12 = 0;
    if (dpcmp(0) >= 0) {
        // Error: negative shift count
        // At instruction: bltz $s0, .L0011E434
        if (M2C_ERROR()) {
            var_2_22 = __floatdidf(temp_16_19);
        } else {
            temp_2_28 = __floatdidf(temp_2_17 | (temp_16_19 >> 1));
            var_2_22 = dpadd(temp_2_28, temp_2_28);
        }
        temp_2_35 = dpsub(arg0, var_2_22);
        if (dpcmp(temp_2_35, 0) < 0) {
            var_16_51 = temp_16_19 - ((u64) (dptoul(dpsub(0, temp_2_35)) << 0x20) >> 0x20);
        } else {
            var_16_51 = temp_16_19 + ((u64) (dptoul(temp_2_35) << 0x20) >> 0x20);
        }
        var_2_12 = var_16_51;
    }
    return var_2_12;
}
#endif /* NON_MATCHING */
