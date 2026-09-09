/* Exact MPEG helper _updateTempTackData; target-derived body pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl UpdateTempTrackData\n"
    ".type UpdateTempTrackData, @function\n"
    "UpdateTempTrackData:\n"
    ".word 0x0080302D\n.word 0x0000382D\n.word 0x8CC30150\n.word 0x24020003\n"
    ".word 0x10620009\n.word 0x0000202D\n.word 0x50A00008\n.word 0x8CC2084C\n"
    ".word 0x04A30004\n.word 0xACC00854\n.word 0x8CC20854\n.word 0x2C470001\n"
    ".word 0xACC00854\n.word 0x00A0202D\n.word 0x8CC2084C\n.word 0x00451821\n"
    ".word 0x10E00006\n.word 0xACC301AC\n.word 0x0085102A\n.word 0x54400004\n"
    ".word 0x8CC20850\n.word 0x24620400\n.word 0xACC201AC\n.word 0x8CC20850\n"
    ".word 0x8CC401AC\n.word 0x0044182A\n.word 0x0083100B\n.word 0x03E00008\n"
    ".word 0xACC20850\n"
    ".size UpdateTempTrackData, .-UpdateTempTrackData\n"
    ".set reorder\n"
);
