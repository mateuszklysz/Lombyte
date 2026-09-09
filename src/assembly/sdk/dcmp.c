/* Exact Newlib helper __mcmp; target-derived body pending recovered SDK source. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl Dcmp\n"
    ".type Dcmp, @function\n"
    "Dcmp:\n"
    ".word 0x8CA30010\n.word 0x8C820010\n.word 0x00431023\n.word 0x10400007\n"
    ".word 0x00031880\n.word 0x03E00008\n.word 0x00000000\n.word 0x24030001\n"
    ".word 0x2402FFFF\n.word 0x03E00008\n.word 0x0064100A\n.word 0x24870014\n"
    ".word 0x24A20014\n.word 0x00E33021\n.word 0x00431821\n.word 0x24C6FFFC\n"
    ".word 0x2463FFFC\n.word 0x8CC20000\n.word 0x8C640000\n.word 0x5444FFF3\n"
    ".word 0x0044202B\n.word 0x00E6102B\n.word 0x1440FFF9\n.word 0x24C6FFFC\n"
    ".word 0x03E00008\n.word 0x0000102D\n"
    ".size Dcmp, .-Dcmp\n"
    ".set reorder\n"
);
