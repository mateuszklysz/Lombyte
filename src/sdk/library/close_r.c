/*
STATE: C_EXACT
SYMBOL: _close_r
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern u32 D_0015EC10[];
extern s32 func_00118E00();
s32 _close_r(s32 *reentrancy_error, s32 file_descriptor) {
    s32 close_result;

    D_0015EC10[0] = 0;
    close_result = func_00118E00(file_descriptor);
    if (close_result == -1) {
        if (D_0015EC10[0] != 0) {
            *reentrancy_error = D_0015EC10[0];
        }
    }
    return close_result;
}
