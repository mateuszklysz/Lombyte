/* Clear the core global word. */
extern int CoreGlobalWord __asm__("D_0012FBF0") __attribute__((section(".data")));

void ClearCoreGlobal(void) __asm__("func_00118BC0");

void ClearCoreGlobal(void) {
    CoreGlobalWord = 0;
}
