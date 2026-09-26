#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00207c28/FUN_00207c28.s", FUN_00207c28);
#else
#include "types.h"

extern void func_001F97E8(void *, s32, s32);
extern void func_001F98D0(void *, void *, s32);

void FUN_00207c28(u8 *destination, u8 *bit_source, u8 *run_source) {
    u8 *destination_end;
    u8 *expanded;
    u8 *chunk_end;
    u8 *read;
    volatile u8 *write;
    u8 *copy_read;
    u8 *copy_write;
    u8 state;
    s32 run_length;
    u8 value;
    u32 bit_count;
    u32 packed;

    destination_end = destination + 0x8000;
    expanded = (u8 *)0x6FFFE000;
    state = 1;
    bit_count = *bit_source >> 1;
    bit_source++;
    func_001F97E8((void *)0x70000000, 0, 0x2400);

    for (;;) {
        chunk_end = destination + 0x400;
        do {
            expanded += *run_source++;
            run_length = *run_source++;
            if (run_length != 0) {
                do {
                    run_length--;
                    if (bit_count == 0) {
                        do {
                            bit_count = *bit_source++;
                            state = state == 0;
                        } while (bit_count == 0);
                    }
                    *expanded++ = state;
                    bit_count--;
                } while (run_length != 0);
            }
        } while (expanded < (u8 *)0x70002000);

        read = (u8 *)0x70000000;
        write = (u8 *)0x70000000;
        while (read < (u8 *)0x70002000) {
            packed = *read++;
            *write = packed;
            packed |= (u32)*read++ << 1;
            *write = packed;
            packed |= (u32)*read++ << 2;
            *write = packed;
            packed |= (u32)*read++ << 3;
            *write = packed;
            packed |= (u32)*read++ << 4;
            *write = packed;
            packed |= (u32)*read++ << 5;
            *write = packed;
            packed |= (u32)*read++ << 6;
            *write = packed;
            packed |= (u32)*read++ << 7;
            *write = packed;
            write++;
        }

        func_001F98D0(destination, (void *)0x70000000, 0x400);
        destination = chunk_end;
        if (destination == destination_end) {
            return;
        }

        func_001F97E8((void *)0x70000000, 0, 0x2000);
        copy_read = (u8 *)0x70002000;
        copy_write = (u8 *)0x70000000;
        if (expanded > (u8 *)0x70002000) {
            while (copy_read < expanded) {
                value = *copy_read++;
                *copy_write++ = value;
            }
        }
        func_001F97E8((void *)0x70002000, 0, 0x400);
        expanded -= 0x2000;
    }
}
#endif /* NON_MATCHING */
