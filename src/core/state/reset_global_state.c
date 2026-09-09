/* Reset the paired global fields used by the frame state. */
struct GlobalState {
    unsigned char padding[0x18e];
    short halfword;
    int word;
};

extern struct GlobalState GlobalStateData __asm__("D_0013C940");

void ResetGlobalStateFields(void) __asm__("func_00217020");

void ResetGlobalStateFields(void) {
    GlobalStateData.halfword = 0;
    GlobalStateData.word = 0;
}
