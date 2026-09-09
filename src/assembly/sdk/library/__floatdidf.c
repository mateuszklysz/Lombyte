/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 60.3947%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __floatdidf; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __floatdidf\n"
    ".type __floatdidf, @function\n"
    "__floatdidf:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $16, $4, $0\n"
    "sd         $17, 0x10($29)\n"
    "ori        $17, $0, 0x81E0\n"
    "dsll32     $17, $17, 15\n"
    "dsra32     $4, $16, 0\n"
    "sd         $31, 0x20($29)\n"
    "jal        litodp\n"
    "nop\n"
    "daddu      $5, $17, $0\n"
    "jal        dpmul\n"
    "daddu     $4, $2, $0\n"
    "daddu      $5, $17, $0\n"
    "jal        dpmul\n"
    "daddu     $4, $2, $0\n"
    "daddu      $17, $2, $0\n"
    "lui        $2, (0xFFFF0000 >> 16)\n"
    "dsrl32     $2, $2, 0\n"
    "and        $16, $16, $2\n"
    "dsll32     $16, $16, 0\n"
    "dsra32     $16, $16, 0\n"
    "jal        litodp\n"
    "daddu     $4, $16, $0\n"
    "bgez       $16, .L0011E544\n"
    "daddu     $4, $17, $0\n"
    "ori        $5, $0, 0x83E0\n"
    "dsll32     $5, $5, 15\n"
    "jal        dpadd\n"
    "daddu     $4, $2, $0\n"
    "daddu      $4, $17, $0\n"
    ".L0011E544:\n"
    "jal        dpadd\n"
    "daddu     $5, $2, $0\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size __floatdidf, .-__floatdidf\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 dpadd();
extern s32 dpmul();
extern s32 litodp();
void __floatdidf(s64 arg0) {
    s64 temp_16_24;
    s64 temp_17_19;
    s64 temp_17_8;
    s64 var_2_25;

    temp_17_8 = 0x81E0 << 0x2F;
    temp_17_19 = dpmul(dpmul(litodp(arg0 >> 0x20), temp_17_8), temp_17_8);
    temp_16_24 = (s64) ((arg0 & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20;
    var_2_25 = litodp(temp_16_24);
    if (temp_16_24 < 0) {
        var_2_25 = dpadd(var_2_25, 0x83E0 << 0x2F);
    }
    dpadd(temp_17_19, var_2_25);
}
#endif /* NON_MATCHING */
