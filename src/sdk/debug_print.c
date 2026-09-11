/*
STATE: C_EXACT
SYMBOL: DebugPrint
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `STUB_printf` starts here; this unit covers only its beginning. */

#include <stdarg.h>

void DebugPrint(char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
}
