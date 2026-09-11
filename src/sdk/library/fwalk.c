/*
STATE: C_EXACT
SYMBOL: _fwalk
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

struct ReentStream {
    u8 reserved_00[0xC];
    s16 flags;
};

struct ReentStreamBlock {
    struct ReentStreamBlock *next;
    s32 count;
    struct ReentStream *streams;
};

s32 _fwalk(u8 *reent, s32 (*callback)(void *)) {
    s32 stream_index;
    s32 result;
    struct ReentStream *stream;
    struct ReentStreamBlock *block;

    result = 0;
    block = (struct ReentStreamBlock *)(reent + 0x1D8);
    if (block != NULL) {
        do {
            stream_index = block->count;
            stream_index -= 1;
            stream = block->streams;
            if (stream_index >= 0) {
                do {
                    if (stream->flags != 0) {
                        result |= callback(stream);
                    }
                    stream_index -= 1;
                    stream = (struct ReentStream *)((u8 *)stream + 0x58);
                } while (stream_index >= 0);
            }
            block = block->next;
        } while (block != NULL);
    }
    return result;
}
