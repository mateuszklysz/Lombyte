/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 57.7632%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _sysbitFlush; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _sysbitFlush\n"
    ".type _sysbitFlush, @function\n"
    "_sysbitFlush:\n"
    "daddu      $6, $4, $0\n"
    "ld         $2, 0x0($6)\n"
    "lw         $3, 0x10($6)\n"
    "dsllv      $2, $2, $5\n"
    "subu       $3, $3, $5\n"
    "sd         $2, 0x0($6)\n"
    "sltiu      $4, $3, 0x39\n"
    "beqz       $4, .L0012AA0C\n"
    "sw        $3, 0x10($6)\n"
    "lw         $8, 0x24($6)\n"
    "daddu      $9, $5, $0\n"
    "ld         $10, 0x18($6)\n"
    ".L0012A9B8:\n"
    "lw         $5, 0xC($6)\n"
    "addiu      $2, $0, 0x38\n"
    "lw         $7, 0x10($6)\n"
    "lbu        $3, 0x0($5)\n"
    "subu       $2, $2, $7\n"
    "ld         $4, 0x0($6)\n"
    "dsllv      $3, $3, $2\n"
    "addiu      $5, $5, 0x1\n"
    "or         $4, $4, $3\n"
    "sltu       $2, $5, $8\n"
    "sd         $4, 0x0($6)\n"
    "bnez       $2, .L0012A9F4\n"
    "sw        $5, 0xC($6)\n"
    "lw         $2, 0x20($6)\n"
    "sw         $2, 0xC($6)\n"
    ".L0012A9F4:\n"
    "addiu      $2, $7, 0x8\n"
    "sltiu      $3, $2, 0x39\n"
    "bnez       $3, .L0012A9B8\n"
    "sw        $2, 0x10($6)\n"
    "b          .L0012AA18\n"
    "daddu     $2, $10, $9\n"
    ".L0012AA0C:\n"
    "ld         $10, 0x18($6)\n"
    "daddu      $9, $5, $0\n"
    "daddu      $2, $10, $9\n"
    ".L0012AA18:\n"
    "jr         $31\n"
    "sd        $2, 0x18($6)\n"
    ".size _sysbitFlush, .-_sysbitFlush\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_deci_debug_sysbit_flush_types.h"
#include "types.h"


void _sysbitFlush(struct M2c_arg0 *arg0, s64 arg1) {
    u32 temp_2_32;
    u32 temp_3_7;
    u32 temp_7_18;
    u8 *temp_5_16;
    u8 *temp_5_23;

    temp_3_7 = arg0->unk10 - arg1;
    arg0->unk0 = (s64) (arg0->unk0 << arg1);
    arg0->unk10 = temp_3_7;
    if (temp_3_7 < 0x39U) {
        do {
            temp_5_16 = arg0->unkC;
            temp_7_18 = arg0->unk10;
            temp_5_23 = temp_5_16 + 1;
            arg0->unk0 = (s64) (arg0->unk0 | ((s64) *temp_5_16 << (0x38 - temp_7_18)));
            arg0->unkC = temp_5_23;
            if ((u32) temp_5_23 >= (u32) arg0->unk24) {
                arg0->unkC = (u8 *) arg0->unk20;
            }
            temp_2_32 = temp_7_18 + 8;
            arg0->unk10 = temp_2_32;
        } while (temp_2_32 < 0x39U);
    }
    arg0->unk18 = (s64) (arg0->unk18 + arg1);
}
#endif /* NON_MATCHING */
