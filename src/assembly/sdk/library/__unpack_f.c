/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 85.8889%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __unpack_f; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __unpack_f\n"
    ".type __unpack_f, @function\n"
    "__unpack_f:\n"
    "lw         $2, 0x0($4)\n"
    "lui        $3, (0x7FFFFF >> 16)\n"
    "ori        $3, $3, (0x7FFFFF & 0xFFFF)\n"
    "srl        $4, $2, 31\n"
    "srl        $6, $2, 23\n"
    "and        $3, $2, $3\n"
    "andi       $6, $6, 0xFF\n"
    "bnez       $6, .L001203E0\n"
    "sw        $4, 0x4($5)\n"
    "addiu      $2, $0, 0x2\n"
    "jr         $31\n"
    "sw        $2, 0x0($5)\n"
    ".L001203E0:\n"
    "addiu      $2, $0, 0xFF\n"
    "bne        $6, $2, .L00120420\n"
    "lui       $2, (0x40000000 >> 16)\n"
    "bnez       $3, .L00120400\n"
    "lui       $2, (0x100000 >> 16)\n"
    "addiu      $2, $0, 0x4\n"
    "jr         $31\n"
    "sw        $2, 0x0($5)\n"
    ".L00120400:\n"
    "and        $2, $3, $2\n"
    "beqz       $2, .L00120414\n"
    "addiu     $2, $0, 0x1\n"
    "b          .L00120418\n"
    "sw        $2, 0x0($5)\n"
    ".L00120414:\n"
    "sw         $0, 0x0($5)\n"
    ".L00120418:\n"
    "jr         $31\n"
    "sw        $3, 0xC($5)\n"
    ".L00120420:\n"
    "sll        $3, $3, 7\n"
    "or         $3, $3, $2\n"
    "addiu      $4, $6, -0x7F\n"
    "addiu      $2, $0, 0x3\n"
    "sw         $3, 0xC($5)\n"
    "sw         $4, 0x8($5)\n"
    "jr         $31\n"
    "sw        $2, 0x0($5)\n"
    ".size __unpack_f, .-__unpack_f\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library___unpack_f_types.h"
#include "types.h"


void __unpack_f(u32 *arg0, struct M2c_arg1 *arg1) {
    s32 temp_3_8;
    s32 temp_6_9;
    u32 temp_2_3;

    temp_2_3 = *arg0;
    temp_3_8 = temp_2_3 & 0x7FFFFF;
    temp_6_9 = (temp_2_3 >> 0x17) & 0xFF;
    arg1->unk4 = (u32) (temp_2_3 >> 0x1F);
    if (temp_6_9 == 0) {
        arg1->unk0 = 2;
        return;
    }
    if (temp_6_9 == 0xFF) {
        if (temp_3_8 == 0) {
            arg1->unk0 = 4;
            return;
        }
        if (temp_3_8 & 0x100000) {
            arg1->unk0 = 1;
        } else {
            arg1->unk0 = 0;
        }
        arg1->unkC = temp_3_8;
        return;
    }
    arg1->unkC = (s32) ((temp_3_8 << 7) | 0x40000000);
    arg1->unk8 = (s32) (temp_6_9 - 0x7F);
    arg1->unk0 = 3;
}
#endif /* NON_MATCHING */
