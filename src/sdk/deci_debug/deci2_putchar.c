/* STATE: C_EXACT
 * SYMBOL: deci2Putchar
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: buffered deci2 character output
 */

/* deci2Putchar: buffered deci2 character output. */
#include "types.h"

extern s32 D_0012FBFC[];
extern s8 D_00154D00[];
extern s32 Kputs(s8 *text);

void deci2Putchar(s32 c) __asm__("deci2Putchar");

void deci2Putchar(s32 c)
{
    s32 index = D_0012FBFC[0];

    if (index >= 126) {
        D_0012FBFC[0] = 0;
        D_00154D00[127] = 0;
        Kputs(D_00154D00);
        index = D_0012FBFC[0];
    }
    if (c == '\n') {
        D_00154D00[index] = (s8)c;
        D_00154D00[index + 1] = 0;
        D_0012FBFC[0] = 0;
        Kputs(D_00154D00);
    } else {
        D_00154D00[index] = (s8)c;
        D_0012FBFC[0] = index + 1;
    }
}
