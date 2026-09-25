#include "types.h"
struct M2c_var_3_7 {
    s32 unk0;
    s32 unk4;
};

extern u8 D_001D60B8[];
s32 get_stream_buffer_size(s32 arg0) __asm__("FUN_00225d88");

s32 get_stream_buffer_size(s32 arg0) {
    struct M2c_var_3_7 *var_3_7;
    s32 var_5_8;

    var_3_7 = D_001D60B8;
    var_5_8 = 0;
    do {
        var_5_8 += 1;
        if (var_3_7->unk0 == arg0) {
            return (var_3_7->unk4 & 1) ? 0x4F000 : 0x11800;
        }
        var_3_7 += 1;
    } while (var_5_8 < 5);
    return -1;
}

extern __typeof__(get_stream_buffer_size) func_00225D88 __attribute__((alias("FUN_00225d88")));
