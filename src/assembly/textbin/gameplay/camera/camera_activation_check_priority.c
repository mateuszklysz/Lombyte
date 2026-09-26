#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/gameplay/camera/camera_activation_check_priority/FUN_001ec210.s", FUN_001ec210);
#else
#include "types.h"

struct CamFlags {
    s32 kind;
    s32 pad78;
    u8 priority;
    u8 enabled;
    s16 locked;
};

struct Camera {
    u8 pad0[0x74];
    s32 kind;
    s32 pad78;
    u8 priority;
    u8 enabled;
    s16 locked;
    u8 pad80[4];
    s16 spline;
    s16 target;
    u8 pad88[4];
    s16 mode;
};

struct CamMode {
    s32 (*update)(struct Camera *);
    s32 (*check)(struct Camera *, struct Camera *);
    u8 pad8[0xC];
};

struct PathTarget { u8 pad0[0xC]; s32 node; u8 pad10[0x14]; s32 link; };
struct SplineEntry { u8 pad0[0x1C]; struct PathTarget *target; };
struct LinkEntry { u8 pad0[0x10]; s32 id; u8 pad14[0xC]; };
struct World { u8 pad0[0x560]; s32 link_id; u8 pad564[0xC]; s32 link_busy; u8 pad574[0x1D10]; s32 target; };

extern struct CamMode D_001E8C00[];
extern struct SplineEntry D_0015EF90[256];
extern struct LinkEntry *D_0015EF40;
extern struct World D_0013F350;
extern u8 D_0013F3D0[];
extern s32 func_00214720(void *, s32);

s32 camera_activation_check_priority(struct Camera *c, struct Camera *other) __asm__("FUN_001ec210");

s32 camera_activation_check_priority(struct Camera *c, struct Camera *other) {
    s32 (*check)(struct Camera *, struct Camera *);
    struct CamFlags *f;
    struct PathTarget *t;
    s32 link;
    s32 r;

    f = (struct CamFlags *)&c->kind;
    if (c->priority == 0) {
        return 0;
    }
    check = D_001E8C00[c->mode].check;
    if (check != 0) {
        r = check(c, other);
        if (r == -1) {
            return 0;
        }
        if (r == 1) {
            return 1;
        }
    }
    switch (f->kind) {
    case 1:
    case 2:
        if (!f->enabled) {
            return 0;
        }
    case 0:
        if (other == 0) {
            return 1;
        }
        if (other->locked != 0) {
            return 1;
        }
        return f->priority > other->priority;
    case 4:
        t = D_0015EF90[c->spline].target;
        if (other != 0 && other->locked == 0 && !(other->priority < f->priority)) {
            return 0;
        }
        if (func_00214720(D_0013F3D0, t->node) != 0) {
            return 1;
        }
        return 0;
    case 7:
        if (c->target != D_0013F350.target) {
            return 0;
        }
        if (other->locked == 0 && !(other->priority < f->priority)) {
            return 0;
        }
        if (c->target != 3) {
            return 1;
        }
        link = D_0015EF90[c->spline].target->link;
        if (link < 0) {
            return 1;
        }
        if (D_0013F350.link_id != D_0015EF40[link].id) {
            return 0;
        }
        if (D_0013F350.link_busy == 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
#endif /* NON_MATCHING */
