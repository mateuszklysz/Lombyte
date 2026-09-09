/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 10.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact debug varargs prologue DPRINT; target-derived body pending SDK source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl DebugPrint\n"
    ".type DebugPrint, @function\n"
    "DebugPrint:\n"
    ".word 0x27BDFF80\n.word 0xFFA50048\n.word 0xFFA60050\n.word 0xFFA70058\n"
    ".word 0xFFA80060\n.word 0xFFA90068\n.word 0xFFAA0070\n.word 0xFFAB0078\n"
    ".word 0xE7AC0038\n.word 0xE7AE003C\n.word 0xE7B00040\n.word 0xE7B20044\n"
    ".word 0x03E00008\n.word 0x27BD0080\n"
    ".size DebugPrint, .-DebugPrint\n"
    ".set reorder\n"
);
#else
#include "types.h"

void DebugPrint(s32 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, f32 fparg0, f32 fparg2, f32 fparg4, f32 fparg6) {
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    s64 sp48;
    s64 sp50;
    s64 sp58;
    s64 sp60;
    s64 sp68;
    s64 sp70;
    s64 sp78;

    sp48 = arg1;
    sp50 = arg2;
    sp58 = arg3;
    sp60 = arg4;
    sp68 = arg5;
    sp70 = arg6;
    sp78 = arg7;
    sp38 = fparg0;
    sp3C = fparg2;
    sp40 = fparg4;
    sp44 = fparg6;
}
#endif /* NON_MATCHING */
