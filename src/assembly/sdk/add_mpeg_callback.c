/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 74.4444%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact MPEG helper sceMpegAddCallback; target-derived body pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl AddMpegCallback\n"
    ".type AddMpegCallback, @function\n"
    "AddMpegCallback:\n"
    ".word 0x8C820040\n.word 0x000528C0\n.word 0x2443000C\n.word 0x00451021\n"
    ".word 0x00651821\n.word 0xAC470010\n.word 0x8C620000\n.word 0x03E00008\n"
    ".word 0xAC660000\n"
    ".size AddMpegCallback, .-AddMpegCallback\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_add_mpeg_callback_types.h"
#include "types.h"


s32 AddMpegCallback(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_3_7;
    s32 temp_2_3;
    s32 temp_2_9;
    s32 temp_5_4;

    temp_2_3 = arg0->unk40;
    temp_5_4 = arg1 * 8;
    temp_3_7 = temp_2_3 + 0xC + temp_5_4;
    *(s32 *)((u8 *)(temp_2_3 + temp_5_4) + 0x10) = arg3;
    temp_2_9 = *temp_3_7;
    *temp_3_7 = arg2;
    return temp_2_9;
}
#endif /* NON_MATCHING */
