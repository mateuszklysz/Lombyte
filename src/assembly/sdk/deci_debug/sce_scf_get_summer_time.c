/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 98.8461%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceScfGetSummerTime; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceScfGetSummerTime\n"
    ".type sceScfGetSummerTime, @function\n"
    "sceScfGetSummerTime:\n"
    "addiu      $29, $29, -0x20\n"
    "sd         $31, 0x10($29)\n"
    "jal        func_0012D200\n"
    "nop\n"
    "beqz       $2, .L0012D328\n"
    "lui       $2, %hi(D_001330D6)\n"
    "b          .L0012D364\n"
    "lbu       $2, %lo(D_001330D6)($2)\n"
    ".L0012D328:\n"
    "jal        GetOsdConfigParam\n"
    "daddu     $4, $29, $0\n"
    "lw         $2, 0x0($29)\n"
    "srl        $2, $2, 13\n"
    "andi       $2, $2, 0x7\n"
    "bnez       $2, .L0012D34C\n"
    "ori       $4, $29, 0x4\n"
    "b          .L0012D364\n"
    "daddu     $2, $0, $0\n"
    ".L0012D34C:\n"
    "addiu      $5, $0, 0x1\n"
    "jal        GetOsdConfigParam2\n"
    "addiu     $6, $0, 0x1\n"
    "lbu        $3, 0x4($29)\n"
    "srl        $3, $3, 4\n"
    "andi       $2, $3, 0x1\n"
    ".L0012D364:\n"
    "ld         $31, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x20\n"
    ".size sceScfGetSummerTime, .-sceScfGetSummerTime\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_deci_debug_sce_scf_get_summer_time_types.h"
#include "types.h"
extern u32 D_001330D6[];
extern s32 GetOsdConfigParam();
extern s32 GetOsdConfigParam2();
extern s32 IsT10K();

u8 sceScfGetSummerTime(void) {
    struct M2c_SummerWork work;
    register u32 config_value __asm__("v0");
    register u32 summer_value __asm__("v1");

    if (IsT10K() != 0) {
        return D_001330D6[0];
    }
    GetOsdConfigParam(&work.config);
    config_value = work.config;
    if (!((config_value >> 0xD) & 7)) {
        return 0;
    }
    GetOsdConfigParam2(&work.summer, 1, 1);
    summer_value = work.summer;
    return (summer_value >> 4) & 1;
}
#endif /* NON_MATCHING */
