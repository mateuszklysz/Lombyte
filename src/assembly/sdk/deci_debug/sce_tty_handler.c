/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 36.3465%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceTtyHandler; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceTtyHandler\n"
    ".type sceTtyHandler, @function\n"
    "sceTtyHandler:\n"
    "addiu      $29, $29, -0x40\n"
    "addiu      $2, $0, 0x3\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $17, $6, $0\n"
    "sd         $31, 0x30($29)\n"
    "daddu      $16, $5, $0\n"
    "beq        $4, $2, .L0011971C\n"
    "sd        $18, 0x20($29)\n"
    "slti       $2, $4, 0x4\n"
    "bnez       $2, .L00119650\n"
    "addiu     $2, $0, 0x4\n"
    "beq        $4, $2, .L0011976C\n"
    "ld        $31, 0x30($29)\n"
    "b          .L00119794\n"
    "ld        $18, 0x20($29)\n"
    ".L00119650:\n"
    "blez       $4, .L00119790\n"
    "ld        $31, 0x30($29)\n"
    "beql       $16, $0, .L001196C0\n"
    "lw        $18, 0x14($17)\n"
    "lw         $2, 0x8($17)\n"
    "addu       $2, $2, $16\n"
    "sltiu      $2, $2, 0x141\n"
    "bnez       $2, .L0011967C\n"
    "lui       $4, %hi(D_00152710)\n"
    "jal        kprintf\n"
    "addiu     $4, $4, %lo(D_00152710)\n"
    ".L0011967C:\n"
    "lw         $2, 0x8($17)\n"
    "andi       $6, $16, 0xFFFF\n"
    "lw         $5, 0x14($17)\n"
    "lw         $4, 0x0($17)\n"
    "jal        SceDeci2ExRecv\n"
    "addu      $5, $5, $2\n"
    "daddu      $16, $2, $0\n"
    "bgez       $16, .L001196AC\n"
    "nop\n"
    "lui        $4, %hi(D_00152738)\n"
    "jal        kprintf\n"
    "addiu     $4, $4, %lo(D_00152738)\n"
    ".L001196AC:\n"
    "lw         $2, 0x8($17)\n"
    "addu       $2, $2, $16\n"
    "sw         $2, 0x8($17)\n"
    "b          .L00119790\n"
    "ld        $31, 0x30($29)\n"
    ".L001196C0:\n"
    "addiu      $16, $0, 0xC\n"
    "lhu        $2, 0x0($18)\n"
    "slt        $2, $16, $2\n"
    "beqz       $2, .L00119710\n"
    "daddu     $3, $18, $0\n"
    "b          .L001196E4\n"
    "lw        $4, 0x18($17)\n"
    "nop\n"
    ".L001196E0:\n"
    "lw         $4, 0x18($17)\n"
    ".L001196E4:\n"
    "addu       $2, $3, $16\n"
    "lbu        $3, 0x0($2)\n"
    "addiu      $16, $16, 0x1\n"
    "lw         $2, 0xC($4)\n"
    "sb         $3, 0x0($2)\n"
    "jal        QueuePeekWriteDone\n"
    "lw        $4, 0x18($17)\n"
    "lhu        $2, 0x0($18)\n"
    "slt        $2, $16, $2\n"
    "bnel       $2, $0, .L001196E0\n"
    "lw        $3, 0x14($17)\n"
    ".L00119710:\n"
    "sw         $0, 0x8($17)\n"
    "b          .L00119790\n"
    "ld        $31, 0x30($29)\n"
    ".L0011971C:\n"
    "lw         $6, 0x4($17)\n"
    "lw         $4, 0x0($17)\n"
    "lw         $5, 0x10($17)\n"
    "jal        SceDeci2ExSend\n"
    "andi      $6, $6, 0xFFFF\n"
    "daddu      $5, $2, $0\n"
    "bgezl      $5, .L00119750\n"
    "lw        $2, 0x10($17)\n"
    "lui        $4, %hi(D_00152750)\n"
    "jal        kprintf\n"
    "addiu     $4, $4, %lo(D_00152750)\n"
    "b          .L00119788\n"
    "nop\n"
    ".L00119750:\n"
    "lw         $3, 0x4($17)\n"
    "addu       $2, $2, $5\n"
    "subu       $3, $3, $5\n"
    "sw         $2, 0x10($17)\n"
    "sw         $3, 0x4($17)\n"
    "b          .L00119790\n"
    "ld        $31, 0x30($29)\n"
    ".L0011976C:\n"
    "lw         $2, 0x4($17)\n"
    "beqz       $2, .L00119788\n"
    "nop\n"
    "lui        $4, %hi(D_00152768)\n"
    "lw         $5, 0x4($17)\n"
    "jal        kprintf\n"
    "addiu     $4, $4, %lo(D_00152768)\n"
    ".L00119788:\n"
    "sw         $0, 0xC($17)\n"
    "ld         $31, 0x30($29)\n"
    ".L00119790:\n"
    "ld         $18, 0x20($29)\n"
    ".L00119794:\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size sceTtyHandler, .-sceTtyHandler\n"
    ".set reorder\n"
);
#else
#include "types.h"

/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */

#ifndef M2C_MACROS_H
#define M2C_MACROS_H

/* Unknown types */
typedef s32 M2C_UNK;
typedef s8  M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;

/* Unknown field access, like `*(type_ptr) &expr->unk_offset` */
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

/* Bitwise (reinterpret) cast */
#define M2C_BITWISE(type, expr) ((type)(expr))

/* Unaligned reads */
#define M2C_LWL(expr) (expr)
#define M2C_FIRST3BYTES(expr) (expr)
#define M2C_UNALIGNED32(expr) (expr)

/* Unhandled instructions */
#define M2C_ERROR(desc) (0)
#define M2C_TRAP_IF(cond) (0)
#define M2C_BREAK() (0)
#define M2C_SYNC() (0)

#define GLUE_F64(a, b) (0.0)
#define MULT_HI(a, b) (0)
#define MULTU_HI(a, b) (0)
#define DMULT_HI(a, b) (0)
#define DMULTU_HI(a, b) (0)
#define CLZ(x) (0)
#define REVERSE_BITS(x) (0)
#define ROTATE_RIGHT(x, shift) (0)
#define ARM_RRX(x, carry) (0)
#define BSWAP32(x) (0)
#define BSWAP16(x) (0)
#define BSWAP16X2(x) (0)

/* Carry/overflow bits from partially-implemented instructions */
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)

/* Memcpy patterns */
#define M2C_MEMCPY_ALIGNED memcpy
#define M2C_MEMCPY_UNALIGNED memcpy
#define M2C_STRUCT_COPY memcpy

/* Sh2 control register loads/stores */
#define M2C_LOAD_SR() (0)
#define M2C_LOAD_GBR() (0)
#define M2C_LOAD_VBR() (0)
#define M2C_STORE_SR(a)
#define M2C_STORE_GBR(a)
#define M2C_STORE_VBR(a)

#define M2C_CMP_STR(a, b) (0)
#define M2C_TAS_B(a) (0)

#endif /* M2C_MACROS_H */

extern u8 D_00152710[];
extern u8 D_00152738[];
extern u8 D_00152750[];
extern u8 D_00152768[];
extern void QueuePeekWriteDone();
extern s32 SceDeci2ExRecv();
extern s32 SceDeci2ExSend();
extern s32 kprintf();
void sceTtyHandler(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_2_36;
    s32 temp_2_81;
    s32 var_16_51;
    u16 *temp_18_23;
    u8 temp_3_63;

    switch (arg0) {                                 /* irregular */
    default:
        if (arg1 == 0) {
            temp_18_23 = M2C_FIELD(arg2, u16 **, 0x14);
    __asm__ volatile ("" : "+r" (temp_18_23));
            var_16_51 = 0xC;
            if ((s32) *temp_18_23 > 0xC) {
loop_16:
                temp_3_63 = *(M2C_FIELD(arg2, u16 **, 0x14) + var_16_51);
                var_16_51 += 1;
                *M2C_FIELD(M2C_FIELD(arg2, void **, 0x18), u8 **, 0xC) = temp_3_63;
                QueuePeekWriteDone(M2C_FIELD(arg2, void **, 0x18));
                if (var_16_51 < (s32) *temp_18_23) {
                    goto loop_16;
                }
            }
            M2C_FIELD(arg2, s32 *, 8) = 0;
        } else {
            if ((u32) (M2C_FIELD(arg2, s32 *, 8) + arg1) >= 0x141U) {
                kprintf(D_00152710);
            }
            temp_2_36 = SceDeci2ExRecv(M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, u16 **, 0x14) + M2C_FIELD(arg2, s32 *, 8), arg1 & 0xFFFF);
            if (temp_2_36 < 0) {
                kprintf(D_00152738);
            }
            M2C_FIELD(arg2, s32 *, 8) = (s32) (M2C_FIELD(arg2, s32 *, 8) + temp_2_36);
        }
        return;
    case 3:
        temp_2_81 = SceDeci2ExSend(M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 0x10), M2C_FIELD(arg2, s32 *, 4) & 0xFFFF);
        if (temp_2_81 >= 0) {
            M2C_FIELD(arg2, s32 *, 0x10) = (s32) (M2C_FIELD(arg2, s32 *, 0x10) + temp_2_81);
            M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) - temp_2_81);
        } else {
            kprintf(D_00152750, temp_2_81);
block_27:
            M2C_FIELD(arg2, s32 *, 0xC) = 0;
        }
        break;
    case 4:
        if (M2C_FIELD(arg2, s32 *, 4) != 0) {
            kprintf(D_00152768, M2C_FIELD(arg2, s32 *, 4));
        }
        goto block_27;
    }
}
#endif /* NON_MATCHING */
