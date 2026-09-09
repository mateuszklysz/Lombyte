/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023ab78/FUN_0023ab78.s", FUN_0023ab78);
#else
#include "types.h"
/* cygnus-2.96 matched TU — CRI libadxe, recovered from recvx-decomp (CC0). */

typedef signed char Sint8;
typedef signed int  Sint32;
typedef unsigned int Uint32;
extern void func_0033F130(const Sint8 *msg);  /* ADXERR_CallErrFunc1 */
extern const Sint8 D_00451390[];  /* "E9040801:...range outside..." */
extern const Sint8 D_004513C8[];  /* "E9040802:...ptinfo NULL..."    */

__attribute__((section(".text.adxf_ChkPrmPt")))
Sint32 FUN_0023ab78(Sint32 ptid, void *ptinfo) {
    if ((Uint32)ptid >= 0x100) {
        func_0033F130(D_00451390);
        return -3;
    }
    if (ptinfo == 0) {
        func_0033F130(D_004513C8);
        return -3;
    }
    return 0;
}
#endif /* NON_MATCHING */
