/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 48.5294%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _decodeOrSkip; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _decodeOrSkip\n"
    ".type _decodeOrSkip, @function\n"
    "_decodeOrSkip:\n"
    "addiu      $29, $29, -0x10\n"
    "daddu      $7, $4, $0\n"
    "sd         $31, 0x0($29)\n"
    "addiu      $3, $0, 0x3\n"
    "lw         $4, 0x40($7)\n"
    "lw         $2, 0x174($4)\n"
    "beq        $2, $3, .L0012BF48\n"
    "nop\n"
    "jal        _decodeOrSkipField\n"
    "daddu     $4, $7, $0\n"
    "b          .L0012BF54\n"
    "ld        $31, 0x0($29)\n"
    ".L0012BF48:\n"
    "jal        _decodeOrSkipFrame\n"
    "daddu     $4, $7, $0\n"
    "ld         $31, 0x0($29)\n"
    ".L0012BF54:\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x10\n"
    ".size _decodeOrSkip, .-_decodeOrSkip\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library__decodeOrSkip_types.h"
#include "types.h"




extern s32 _decodeOrSkipField();
extern s32 _decodeOrSkipFrame();
void _decodeOrSkip(struct M2c_arg0 *arg0) {
    if (arg0->unk40->unk174 != 3) {
        _decodeOrSkipField(arg0, arg0);
        return;
    }
    _decodeOrSkipFrame(arg0, arg0);
}
#endif /* NON_MATCHING */
