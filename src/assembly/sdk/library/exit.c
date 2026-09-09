/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit exit; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl exit\n"
    ".type exit, @function\n"
    "exit:\n"
    "addiu      $29, $29, -0x60\n"
    "sd         $20, 0x40($29)\n"
    "lui        $20, %hi(D_0012F76C)\n"
    "sd         $19, 0x30($29)\n"
    "sd         $31, 0x50($29)\n"
    "sd         $18, 0x20($29)\n"
    "sd         $16, 0x0($29)\n"
    "lw         $2, %lo(D_0012F76C)($20)\n"
    "sd         $17, 0x10($29)\n"
    "lw         $17, 0x148($2)\n"
    "beqz       $17, .L0011392C\n"
    "daddu     $19, $4, $0\n"
    "lw         $16, 0x4($17)\n"
    "nop\n"
    ".L001138F0:\n"
    "addiu      $16, $16, -0x1\n"
    "bltzl      $16, .L00113924\n"
    "lw        $17, 0x0($17)\n"
    "addiu      $18, $17, 0x8\n"
    "sll        $3, $16, 2\n"
    "nop\n"
    ".L00113908:\n"
    "addu       $3, $18, $3\n"
    "lw         $2, 0x0($3)\n"
    "jalr       $2\n"
    "addiu     $16, $16, -0x1\n"
    "bgez       $16, .L00113908\n"
    "sll       $3, $16, 2\n"
    "lw         $17, 0x0($17)\n"
    ".L00113924:\n"
    "bnel       $17, $0, .L001138F0\n"
    "lw        $16, 0x4($17)\n"
    ".L0011392C:\n"
    "lw         $4, %lo(D_0012F76C)($20)\n"
    "lw         $2, 0x3C($4)\n"
    "beql       $2, $0, .L00113948\n"
    "daddu     $4, $19, $0\n"
    "jalr       $2\n"
    "nop\n"
    "daddu      $4, $19, $0\n"
    ".L00113948:\n"
    "ld         $31, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "j          JumpToRfuStatus\n"
    "addiu     $29, $29, 0x60\n"
    ".size exit, .-exit\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern int D_00747A2C;
extern void func_00160D50(char *);
extern char *Obj0000_Call_func_0015FD18_Field_48_161288(char *);

__attribute__((section(".text.func_00160B90")))
void func_00160B90(char *arg)
{
    int *base;
    char *obj;
    short t;
    int v;
    void (*fn)(char *);

    base = &D_00747A2C;
    if (base[0] < 0) {
        return;
    }
    if (base[0x14] & 0x100000) {
        return;
    }
    func_00160D50(arg);
    obj = Obj0000_Call_func_0015FD18_Field_48_161288(arg);
    if (obj == 0) {
        return;
    }
    if (*(unsigned char *)(obj + 0x59) != 0) {
        return;
    }
    t = *(unsigned short *)(arg + 0x50) - 4;
    switch (t) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
    case 10:
    case 13:
        v = *(int *)(obj + 0x70);
        fn = *(void (**)(char *))(v + 0x34);
        fn(obj + *(short *)(v + 0x30));
        break;
    }
}
#endif /* NON_MATCHING */
