/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 67.7021%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _calloc_r; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _calloc_r\n"
    ".type _calloc_r, @function\n"
    "_calloc_r:\n"
    "mult       $0, $5, $6\n"
    "addiu      $29, $29, -0x20\n"
    "sd         $16, 0x0($29)\n"
    "sd         $31, 0x10($29)\n"
    "mflo       $5\n"
    "jal        _malloc_r\n"
    "nop\n"
    "daddu      $16, $2, $0\n"
    "bnel       $16, $0, .L001123D8\n"
    "lw        $3, -0x4($16)\n"
    "b          .L00112454\n"
    "daddu     $2, $0, $0\n"
    ".L001123D8:\n"
    "lui        $2, (0xFFFFFFFC >> 16)\n"
    "ori        $2, $2, (0xFFFFFFFC & 0xFFFF)\n"
    "and        $3, $3, $2\n"
    "addiu      $6, $3, -0x4\n"
    "sltiu      $2, $6, 0x25\n"
    "beqz       $2, .L00112444\n"
    "sltiu     $2, $6, 0x14\n"
    "bnez       $2, .L00112430\n"
    "daddu     $4, $16, $0\n"
    "sw         $0, 0x0($16)\n"
    "addiu      $4, $16, 0x8\n"
    "sltiu      $2, $6, 0x1C\n"
    "bnez       $2, .L00112430\n"
    "sw        $0, 0x4($16)\n"
    "sltiu      $2, $6, 0x24\n"
    "sw         $0, 0x8($16)\n"
    "sw         $0, 0xC($16)\n"
    "bnez       $2, .L00112430\n"
    "addiu     $4, $16, 0x10\n"
    "sw         $0, 0x10($16)\n"
    "addiu      $4, $16, 0x18\n"
    "sw         $0, 0x14($16)\n"
    ".L00112430:\n"
    "sw         $0, 0x0($4)\n"
    "addiu      $4, $4, 0x4\n"
    "sw         $0, 0x4($4)\n"
    "b          .L00112450\n"
    "sw        $0, 0x0($4)\n"
    ".L00112444:\n"
    "daddu      $4, $16, $0\n"
    "jal        memset\n"
    "daddu     $5, $0, $0\n"
    ".L00112450:\n"
    "daddu      $2, $16, $0\n"
    ".L00112454:\n"
    "ld         $31, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x20\n"
    ".size _calloc_r, .-_calloc_r\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library__calloc_r_types.h"
#include "types.h"




extern s32 _malloc_r();
extern s32 memset();
s32 *_calloc_r(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_6_19;
    struct M2c_temp_2_8 *temp_2_8;
    struct M2c_var_4_24 *var_4_24;

    temp_2_8 = _malloc_r(arg1 * arg2);
    if (temp_2_8 != NULL) {
        temp_6_19 = (*(s32 *)((u8 *)temp_2_8 - 0x4) & 0xFFFFFFFC) - 4;
        if (temp_6_19 < 0x25U) {
            var_4_24 = temp_2_8;
            if (temp_6_19 >= 0x14U) {
                temp_2_8->unk0 = 0;
                var_4_24 = ((u8 *)temp_2_8 + (8));
                temp_2_8->unk4 = 0;
                if (temp_6_19 >= 0x1CU) {
                    temp_2_8->unk8 = 0;
                    temp_2_8->unkC = 0;
                    var_4_24 = ((u8 *)temp_2_8 + (0x10));
                    if (temp_6_19 >= 0x24U) {
                        temp_2_8->unk10 = 0;
                        var_4_24 = ((u8 *)temp_2_8 + (0x18));
                        temp_2_8->unk14 = 0;
                    }
                }
            }
            var_4_24->unk0 = 0;
            *(s32 *)((u8 *)(((u8 *)var_4_24 + (4))) + 0x4) = 0;
            var_4_24->unk4 = 0;
        } else {
            memset(temp_2_8, 0, temp_6_19);
        }
        return temp_2_8;
    }
    return NULL;
}
#endif /* NON_MATCHING */
