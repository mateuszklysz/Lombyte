/* STATE: C_EXACT
 * SYMBOL: _dispatchMpegCallback
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: Himuro -O2 -g2
 * DECISION: promoted; BLOCKER: none.
 * GATE: authoritative full baseline PASS 2026-09-10 (final-gate.log); built ELF
 *   == retail e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9.
 * ROLE: dispatches the registered MPEG callback for the event type.
 * EVIDENCE: build/workspace/patha-execution-20260910/final-gate.log and
 *   linked/dispatch/receipt.json (byte-equal linked retail slice).
 */
#include "types.h"
struct MpegContext;
struct MpegEvent { s32 type; };
struct MpegCallback {
    s32 (*function)(struct MpegContext *, struct MpegEvent *, void *);
    void *data;
};
struct MpegCallbacks {
    u8 pad0[0xC];
    struct MpegCallback entries[1];
};
struct MpegContext {
    u8 pad0[0x40];
    struct MpegCallbacks *callbacks;
};

s32 _dispatchMpegCallback(struct MpegContext *context, struct MpegEvent *event) {
    struct MpegCallbacks *callbacks;
    s32 (*callback)(struct MpegContext *, struct MpegEvent *, void *);
    s32 result;
    result = 0;
    if (context != 0) {
        callbacks = context->callbacks;
        if (callbacks != 0) {
            callback = callbacks->entries[event->type].function;
            if (callback != 0) {
                result = callback(context, event, callbacks->entries[event->type].data);
            }
        }
    }
    return result;
}
