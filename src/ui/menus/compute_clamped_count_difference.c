#include "types.h"
extern s32 count_nonzero_entries_up_to_40() __asm__("FUN_00215290");
extern s32 count_nonzero_entries_up_to_10() __asm__("FUN_00215300");
s32 compute_clamped_count_difference(void) __asm__("FUN_00215248");

s32 compute_clamped_count_difference(void) {
    s32 temp_16_10;
    s32 temp_16_13;
    s32 temp_16_17;

    temp_16_10 = count_nonzero_entries_up_to_40();
    temp_16_13 = temp_16_10 - (count_nonzero_entries_up_to_10() * 4);
    temp_16_17 = (temp_16_13 <= -1) ? 0 : temp_16_13;
    return (temp_16_17 < 0x29) ? temp_16_17 : 0x28;
}
