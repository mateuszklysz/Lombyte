#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00238310/FUN_00238310.s", FUN_00238310);
#else
#include "types.h"

extern s32 D_0015F438;
extern volatile s32 D_001E6018[];
extern s32 D_001E6118[];
extern void func_001F5450(s32, s32, s32, s32, s32, s32, s32, s32, s64, s64);
extern s32 func_001F96F8(s32);
extern f32 func_001FA6C0(s32);
extern s32 func_001FA6D0(f32);
extern s32 func_001FF960(s32, s32);
extern u64 func_001FFA10(s32);

void FUN_00238310(u8 *text, s32 start_x, s32 start_y, f32 scale) {
    s64 texture;
    s32 x;
    s32 y;
    s32 code;
    s32 bold;
    s32 skip_draw;
    s32 first_random;
    s32 second_random;
    s32 random_limit;
    s32 remainder;
    s32 glyph_word;
    s32 glyph_x;
    s32 glyph_y;
    s32 width;
    s32 height;
    s32 table_offset;
    u8 ch;

    x = start_x;
    y = start_y;
    bold = 0;
    texture = func_001FFA10(func_001FF960(0xE935, 0));

    for (;;) {
        ch = *text;
        if (ch == 0) {
            break;
        }
        text++;
        code = (s32)ch - 0x20;
        skip_draw = 0;

        if (code == 0x42) {
            bold = 1;
        }
        if (code == 0xEA) {
            x = start_x;
            y += 9;
        }

        if (code < 0x3B) {
            table_offset = code * 4;
            {
                volatile s32 *entry;
                entry = D_001E6018 + code;
                if (*entry != -1 || code == 0) {
                    if (bold != 0) {
                        bold = 0;
                        first_random = func_001F96F8(0x1E);
                        second_random = func_001F96F8(0xA);
                        random_limit = first_random + second_random;
                        remainder = *(s32 *)0x15F438 % random_limit;
                        first_random = func_001F96F8(0xA);
                        skip_draw = 1;
                        if (remainder >= first_random) {
                            skip_draw = 0;
                        }
                    }

                    if (code != 0 && skip_draw == 0) {
                        glyph_word = *entry;
                        glyph_x = (u32)glyph_word >> 0x14;
                        glyph_y = (glyph_word & 0xFFFF) >> 4;

                        if (x + 9 > 0) {
                            if (x < 0x100) {
                                width = func_001FA6D0(func_001FA6C0(9) * scale);
                                height = func_001FA6D0(func_001FA6C0(9) * scale);
                                func_001F5450(
                                    x, y, width, height, glyph_y, glyph_x, 9, 9,
                                    (s64)0x80404040, texture);
                            }
                        }
                    }

                    x += func_001FA6D0(func_001FA6C0(*(s32 *)((u8 *)D_001E6118 + table_offset)) * scale);
                }
            }
        }
    }
}
#endif /* NON_MATCHING */
