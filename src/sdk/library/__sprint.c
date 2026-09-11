/*
STATE: C_EXACT
SYMBOL: __sprint
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

struct PrintIoVector {
    u8 reserved_00[4];
    s32 remaining_bytes;
    s32 vector_count;
};

extern s32 __sfvwrite();

s32 __sprint(s32 reent, struct PrintIoVector *vectors) {
    s32 result;

    if (vectors->vector_count == 0) {
        vectors->remaining_bytes = 0;
        return 0;
    }
    result = __sfvwrite(reent, vectors);
    vectors->vector_count = 0;
    vectors->remaining_bytes = 0;
    return result;
}
