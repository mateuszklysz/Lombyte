#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00239d60/FUN_00239d60.s", FUN_00239d60);
#else
#include "types.h"

struct Fun239d60_Box {
    s32 x;
    s32 y;
    s32 z;
    u16 width;
    u16 height;
};

struct Fun239d60_Auxiliary {
    f32 x;
    f32 y;
    u8 pad_8[0x16];
    u16 mask;
};

struct Fun239d60_Config {
    u8 pad_0[0x8];
    f32 x;
    f32 y;
    f32 x_scale;
    f32 y_scale;
};

extern struct Fun239d60_Box *D_00161194;
extern u8 *D_00161190;
extern s32 D_00161198_gp __asm__("D_00161198");
__asm__(".extern D_00161198, 4");
extern struct Fun239d60_Config D_001E66E0;
extern s32 FUN_001FA6D0(f32 value) __asm__("FUN_001FA6D0");

s32 FUN_00239d60(f32 x, f32 y, f32 z) {
    s32 grid_x;
    s32 grid_y;
    s32 grid_z;
    s32 index;
    s32 stride;
    s32 cell_x;
    s32 cell_y;
    u8 bit;
    u32 bit_mask;
    struct Fun239d60_Box *box;
    struct Fun239d60_Auxiliary *aux;

    index = 0;
    grid_x = FUN_001FA6D0(x * 1024.0f);
    grid_y = FUN_001FA6D0(y * 1024.0f);
    grid_z = FUN_001FA6D0(z * 1024.0f);
    box = D_00161194;
    if (*(s32 *)0x00161198 > 0) {
        stride = 0;
        do {
            if (grid_x >= box->x && grid_y >= box->y && grid_z >= box->z &&
                grid_x < box->x + box->width &&
                grid_y < box->y + box->height &&
                grid_z < box->z + 0x800) {
                aux = (struct Fun239d60_Auxiliary *)(D_00161190 + stride);
                cell_x = FUN_001FA6D0((x - (aux->x + D_001E66E0.x)) /
                                      D_001E66E0.x_scale);
                cell_y = FUN_001FA6D0((y - (aux->y + D_001E66E0.y)) /
                                      D_001E66E0.y_scale);
                bit = ((cell_x >> 2) & 3) | (cell_y & 0xC);
                bit_mask = 1U << bit;
                if (((u32)aux->mask & bit_mask) != 0U) {
                    return index;
                }
            }
            index++;
            stride += 0x1190;
            box++;
        } while (index < D_00161198_gp);
    }
    return -1;
}
#endif /* NON_MATCHING */
