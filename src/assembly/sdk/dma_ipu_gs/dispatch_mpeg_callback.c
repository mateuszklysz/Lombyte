/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 76.7500%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _dispatchMpegCallback; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _dispatchMpegCallback\n"
    ".type _dispatchMpegCallback, @function\n"
    "_dispatchMpegCallback:\n"
    "addiu      $29, $29, -0x10\n"
    "daddu      $7, $0, $0\n"
    "beqz       $4, .L0012BB78\n"
    "sd        $31, 0x0($29)\n"
    "lw         $6, 0x40($4)\n"
    "beqz       $6, .L0012BB7C\n"
    "ld        $31, 0x0($29)\n"
    "lw         $2, 0x0($5)\n"
    "sll        $2, $2, 3\n"
    "addu       $3, $6, $2\n"
    "lw         $3, 0xC($3)\n"
    "beqz       $3, .L0012BB7C\n"
    "addu      $2, $6, $2\n"
    "jalr       $3\n"
    "lw        $6, 0x10($2)\n"
    "daddu      $7, $2, $0\n"
    ".L0012BB78:\n"
    "ld         $31, 0x0($29)\n"
    ".L0012BB7C:\n"
    "daddu      $2, $7, $0\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x10\n"
    ".size _dispatchMpegCallback, .-_dispatchMpegCallback\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_dispatch_mpeg_callback_types.h"
#include "types.h"


s32 _dispatchMpegCallback(struct M2c_arg0 *arg0, s32 *arg1) {
    s32 (*temp_3_13)(s32, void *);
    s32 temp_2_11;
    s32 temp_6_7;
    s32 var_7_4;

    var_7_4 = 0;
    if (arg0 != NULL) {
        temp_6_7 = arg0->unk40;
        if (temp_6_7 != 0) {
            temp_2_11 = *arg1 * 8;
            temp_3_13 = *(s32 *)((u8 *)(temp_6_7 + temp_2_11) + 0xC);
            if (temp_3_13 != NULL) {
                var_7_4 = temp_3_13(*(s32 *)((u8 *)(temp_6_7 + temp_2_11) + 0x10), 0);
            }
        }
    }
    return var_7_4;
}
#endif /* NON_MATCHING */
