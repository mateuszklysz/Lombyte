/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 96.0000%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceDbcCreateSocket; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceDbcCreateSocket\n"
    ".type sceDbcCreateSocket, @function\n"
    "sceDbcCreateSocket:\n"
    "addiu      $29, $29, -0x30\n"
    "lui        $7, %hi(D_0015B080)\n"
    "sd         $16, 0x10($29)\n"
    "addiu      $9, $4, 0x14\n"
    "sd         $31, 0x20($29)\n"
    "addiu      $16, $7, %lo(D_0015B080)\n"
    "sw         $5, 0x28($16)\n"
    "daddu      $8, $0, $0\n"
    "lw         $2, 0x0($4)\n"
    "addiu      $10, $16, 0x14\n"
    "sw         $6, 0x2C($16)\n"
    "sw         $2, %lo(D_0015B080)($7)\n"
    "lw         $3, 0x4($4)\n"
    "sw         $3, 0x4($16)\n"
    "lw         $2, 0x8($4)\n"
    "sw         $2, 0x8($16)\n"
    "lw         $3, 0xC($4)\n"
    "sw         $3, 0xC($16)\n"
    "lw         $2, 0x10($4)\n"
    "sw         $2, 0x10($16)\n"
    ".L00124768:\n"
    "addu       $2, $9, $8\n"
    "addu       $4, $10, $8\n"
    "lbu        $3, 0x0($2)\n"
    "addiu      $8, $8, 0x1\n"
    "slti       $2, $8, 0x10\n"
    "sb         $3, 0x0($4)\n"
    "bnez       $2, .L00124768\n"
    "nop\n"
    "addiu      $7, $7, %lo(D_0015B080)\n"
    "lui        $5, (0x80000901 >> 16)\n"
    "lui        $4, %hi(D_0015B008)\n"
    "sw         $0, 0x0($29)\n"
    "addiu      $4, $4, %lo(D_0015B008)\n"
    "ori        $5, $5, (0x80000901 & 0xFFFF)\n"
    "daddu      $6, $0, $0\n"
    "addiu      $8, $0, 0x400\n"
    "daddu      $9, $7, $0\n"
    "addiu      $10, $0, 0x400\n"
    "jal        sceSifCallRpc\n"
    "daddu     $11, $0, $0\n"
    "bgezl      $2, .L001247D0\n"
    "lw        $2, 0x24($16)\n"
    "lui        $4, %hi(D_00153578)\n"
    "jal        func_00124A20\n"
    "addiu     $4, $4, %lo(D_00153578)\n"
    "daddu      $2, $0, $0\n"
    ".L001247D0:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $16, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size sceDbcCreateSocket, .-sceDbcCreateSocket\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_sceDbcCreateSocket_types.h"
#include "types.h"


extern u8 D_00153578[]; extern u8 D_0015B008[]; extern struct M2c_D_0015B080 D_0015B080; extern s32 func_00124A20(); extern s32 sceSifCallRpc();
s32 sceDbcCreateSocket(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    register struct M2c_D_0015B080 *state __asm__("s0") = &D_0015B080;
    register u8 *src __asm__("t1") = (u8 *)arg0 + 0x14;
    register u8 *dst __asm__("t2");
    register s32 i __asm__("t0") = 0;
    register s32 even __asm__("v0");
    register s32 odd __asm__("v1");
    state->unk28 = arg1;
    even = arg0->unk0;
    dst = (u8 *)state + 0x14;
    state->unk2C = arg2;
    state->unk0 = even;
    odd = arg0->unk4; state->unk4 = odd;
    even = arg0->unk8; state->unk8 = even;
    odd = arg0->unkC; state->unkC = odd;
    even = arg0->unk10; state->unk10 = even;
    do { dst[i] = src[i]; i++; } while (i < 0x10);
    if (sceSifCallRpc(D_0015B008, 0x80000901, 0, &D_0015B080, 0x400, &D_0015B080, 0x400, 0, 0) < 0) {
        func_00124A20(D_00153578);
        return 0;
    }
    return state->unk24;
}
#endif /* NON_MATCHING */
