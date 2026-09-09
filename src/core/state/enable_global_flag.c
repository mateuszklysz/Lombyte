/* Enable the global state flag. */
extern int GlobalStateFlag __asm__("D_0015F49C");

void EnableGlobalStateFlag(void) __asm__("func_001F61E8");

void EnableGlobalStateFlag(void) {
    GlobalStateFlag = 1;
}
