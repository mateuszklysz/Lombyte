/* Disable the global state flag. */
extern int GlobalStateFlag __asm__("D_0015F49C");

void DisableGlobalStateFlag(void) __asm__("func_001F61F8");

void DisableGlobalStateFlag(void) {
    GlobalStateFlag = 0;
}
