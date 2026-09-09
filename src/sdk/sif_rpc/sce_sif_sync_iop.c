int sceSifGetReg(int register_number) __asm__("sceSifGetReg");
void func_00118BC0(void) __asm__("func_00118BC0");

int sceSifSyncIop(void) __asm__("sceSifSyncIop");

int sceSifSyncIop(void) {
    if (sceSifGetReg(4) & 0x40000) {
        func_00118BC0();
        return 1;
    }
    return 0;
}
