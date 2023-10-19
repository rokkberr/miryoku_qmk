// 0x00C6 Æ   0x00E6 æ
// 0x00D8 Ø   0x00F8 ø
// 0x00C5 Å   0x00E5 å

const uint32_t PROGMEM unicode_map[] = {
    [AE_UPPER] = 0x00C6,
    [OE_UPPER] = 0x00D8,
    [AA_UPPER] = 0x00C5,
    [AE_LOWER] = 0x00E6,
    [OE_LOWER] = 0x00F8,
    [AA_LOWER] = 0x00E5,
};
