typedef unsigned int u32;

extern u32 D_001940CC[4] __asm__("D_001940CC");
extern u32 D_0019A3E8[8] __asm__("D_0019A3E8");

void InitializeResourceEntry(void) __asm__("InitializeResourceEntry");

void InitializeResourceEntry(void) {
    u32 base;
    u32 *entry;

    base = D_001940CC[0];
    entry = D_0019A3E8;
    entry[4] = base;
    entry[5] = base + 0x64000;
}
