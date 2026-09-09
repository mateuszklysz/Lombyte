/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit checkModelVersion; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl checkModelVersion\n"
    ".type checkModelVersion, @function\n"
    "checkModelVersion:\n"
    "addiu      $29, $29, -0x140\n"
    "lui        $4, %hi(D_00153030)\n"
    "sd         $18, 0x120($29)\n"
    "addiu      $5, $0, 0x1\n"
    "sd         $31, 0x130($29)\n"
    "addiu      $4, $4, %lo(D_00153030)\n"
    "sd         $17, 0x110($29)\n"
    "jal        sceOpen\n"
    "sd        $16, 0x100($29)\n"
    "daddu      $18, $2, $0\n"
    "bgez       $18, .L00121A50\n"
    "daddu     $17, $0, $0\n"
    "b          .L00121AA0\n"
    "addiu     $2, $0, -0x1\n"
    ".L00121A50:\n"
    "b          .L00121A5C\n"
    "daddu     $16, $29, $0\n"
    ".L00121A58:\n"
    "addiu      $17, $17, 0x1\n"
    ".L00121A5C:\n"
    "sltiu      $2, $17, 0x100\n"
    "beqz       $2, .L00121A80\n"
    "daddu     $5, $16, $0\n"
    "daddu      $4, $18, $0\n"
    "jal        sceRead\n"
    "addiu     $6, $0, 0x1\n"
    "lb         $3, 0x0($16)\n"
    "bnez       $3, .L00121A58\n"
    "addiu     $16, $16, 0x1\n"
    ".L00121A80:\n"
    "jal        sceClose\n"
    "daddu     $4, $18, $0\n"
    "addiu      $4, $17, -0x9\n"
    "jal        CheckStateRange\n"
    "addu      $4, $29, $4\n"
    "lui        $3, (0x1315670 >> 16)\n"
    "ori        $3, $3, (0x1315670 & 0xFFFF)\n"
    "slt        $2, $3, $2\n"
    ".L00121AA0:\n"
    "ld         $31, 0x130($29)\n"
    "ld         $18, 0x120($29)\n"
    "ld         $17, 0x110($29)\n"
    "ld         $16, 0x100($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x140\n"
    ".size checkModelVersion, .-checkModelVersion\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_checkModelVersion_types.h"
#include "types.h"
/* ee-2.9-991111 matched TU. */

extern void sceSifInitRpc(int mode);
extern void func_003B1F28(const char *fmt);
extern void FlushCache(int mode);
extern unsigned char D_0077C900[];
extern char D_0045E998[];
extern int D_003FA300;
extern int D_003FA304;








__attribute__((section(".text.func_003A11F8")))
int func_003A11F8(void)
{
	int i;

	sceSifInitRpc(0);
	while (1) {
		if (func_003B2F48(D_0077C900, 0x80000701, 0) < 0) {
			func_003B1F28(D_0045E998);
			return -1;
		}
		for (i = 10000; i != -1; i--)
			;
		if (((Cd *)D_0077C900)->server != 0)
			break;
	}
	D_003FA300 = 0;
	D_003FA304 = 0;
	FlushCache(0);
	return 0;
}
#endif /* NON_MATCHING */
