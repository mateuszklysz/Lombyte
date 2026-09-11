/*
STATE: C_EXACT
SYMBOL: DebugPrint
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `STUB_printf` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven): staged and full-ELF gates PASSED 2026-09-10.
 * SYMBOL: DebugPrint
 * UNIT: sdk/debug_print (retagged from assembly/sdk/debug_print)
 * SCORE: code=100.0 functions=100.0 data=100.0 complete_data=100.0
 *   (fresh SN ee-gcc2.9-991111b/r4, -O2 -g2)
 * COMPILER: SN. The retail body is only the varargs register-save prologue,
 *   which the SN stdarg.h va_start emits byte-exactly; the unit is forced onto
 *   SN through SN_COMPILER_UNITS because the EE-GCC 2.9 tree ships no stdarg.h.
 * GATE: full baseline PASS (built e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9
 *   vs retail e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9);
 *   baseline report 100% matched code/functions and complete data.
 * DECISION: promoted.
 */
#include <stdarg.h>

void DebugPrint(char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
}
