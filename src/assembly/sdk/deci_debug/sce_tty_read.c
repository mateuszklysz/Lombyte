/*
STATE: C_NON_MATCHING
SYMBOL: sceTtyRead
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceTtyRead; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/deci_debug/sce_tty_read/sceTtyRead.s", sceTtyRead);
#else
#include "rnc/assembly_sdk_deci_debug_sce_tty_read_types.h"
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
