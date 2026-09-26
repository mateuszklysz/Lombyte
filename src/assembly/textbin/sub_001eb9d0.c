#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/sub_001eb9d0/sub_001eb9d0.s", sub_001eb9d0);
#else
#include "types.h"

/* Mid-function chunk of FUN_001eb798 (transition_do_transition).
 * Retail range 0x001EB9D0..0x001EBAFF: no prologue, no epilogue; the
 * prologue lives in assembly/textbin/gameplay/state/transition_do_transition
 * (0x001EB798) and the epilogue in assembly/textbin/sub_001ebc08 (0x001EBC08). */

extern s32 D_0015ED88;
extern s32 D_0015F618;
extern s32 D_001862B0;
extern s32 D_0018CB20[];

__asm__(".extern D_0015F618, 4");

void vu1_send_chain(void);
void swap_render_buffer_chain(void);
void append_draw_buffer_packet(void);
void append_palette_transfer_packet(void);
void append_draw_environment_packet(void);
void memcard_update_state(void);
void FUN_00208840(void);
void update_primary_pad_state(void);
void QueueDmaTransfer(s32 index);
s32 is_active_state_entry(s32 arg0, s32 arg1);
s32 allocate_voice_for_group_entry(s32 arg0, s32 arg1, s32 arg2);
void release_voice_slot(s32 arg0);
void FUN_001eb0a8(void);

void sub_001eb9d0(s32 arg0) __asm__("sub_001eb9d0");

void sub_001eb9d0(s32 arg0) {
    s32 *p;
    s32 m1;

    m1 = -1;
    vu1_send_chain();
    swap_render_buffer_chain();
    append_draw_buffer_packet();
    append_palette_transfer_packet();
    append_draw_environment_packet();
    memcard_update_state();
    FUN_00208840();
    update_primary_pad_state();
    QueueDmaTransfer(D_0015ED88);
    D_0015F618 = 0;

    if (D_001862B0 != arg0) {
        p = (s32 *)((u8 *)&D_001862B0 + 0xC);
        do {
            if (p[-2] != m1) {
                if (p[-3] != D_0018CB20[13]) {
                    if (is_active_state_entry(p[-3], p[-1])) {
                        release_voice_slot(p[-3]);
                        p[0] = m1;
                    }
                } else if (!is_active_state_entry(p[-3], p[-1])) {
                    p[0] = allocate_voice_for_group_entry(p[-1], 0, 0);
                }
            } else if (D_0018CB20[13] < p[-3]) {
                p[0] = m1;
            } else if (p[0] == m1) {
                p[0] = allocate_voice_for_group_entry(p[-1], 0, 0);
            }
            p += 4;
        } while (p[-3] != m1);
    }

    FUN_001eb0a8();
}
#endif /* NON_MATCHING */
