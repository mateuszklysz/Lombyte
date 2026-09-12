/*
STATE: C_NON_MATCHING
SYMBOL: FindSubstring
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact Newlib helper strstr; target-derived body pending recovered SDK source. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/find_substring/FindSubstring.s", FindSubstring);
#else
#include "types.h"

s8 *FindSubstring(s8 *arg0, s8 *arg1) {
    s8 *p;
    s32 i;

    p = arg0;
    if (*p == 0) {
        return (*arg1 == 0) ? p : NULL;
    }
    do {
        i = 0;
        if (*arg1 == 0) {
            return p;
        }
        if (*arg1 == *p) {
            do {
                i += 1;
                if (arg1[i] == 0) {
                    return p;
                }
            } while (arg1[i] == p[i]);
        }
        p += 1;
    } while (*p != 0);
    return NULL;
}
#endif /* NON_MATCHING */
