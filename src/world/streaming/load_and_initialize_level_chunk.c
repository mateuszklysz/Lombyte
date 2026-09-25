#include "types.h"
struct Chunk { u8 pad0[0x10]; s32 offset; };
struct Loader { u8 pad0[0x10]; s32 dest; s32 sector; };
extern struct Loader D_00137B80;
extern s32 D_0015ED84;
extern void func_001FD6E0(s32, struct Chunk **, s32 *);
extern void FUN_002168a8(s32);
extern s32 func_00216828(struct Chunk *, s32, s32);
extern void func_00209298(void *);
void load_and_initialize_level_chunk(void) __asm__("FUN_00209370");

void load_and_initialize_level_chunk(void) {
    struct Chunk *chunk;
    s32 size;

    func_001FD6E0(D_00137B80.sector << 11, &chunk, &size);
    FUN_002168a8(1);
    func_00216828(chunk, D_00137B80.dest, D_00137B80.sector);
    func_00209298((u8 *)chunk + chunk->offset);
    D_0015ED84 = 0;
}

extern __typeof__(load_and_initialize_level_chunk) func_00209370 __attribute__((alias("FUN_00209370")));
