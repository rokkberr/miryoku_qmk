#pragma once

enum unicode_names {
    AE_UPPER,
    OE_UPPER,
    AA_UPPER,
    AE_LOWER,
    OE_LOWER,
    AA_LOWER,
};

/*
#define KDKAE XP(AE_LOWER, AE_UPPER)
#define KDKOE XP(OE_LOWER, OE_UPPER)
#define KDKAA XP(AA_LOWER, AA_UPPER)
*/

#define KDKAE UC(0x00C6)
#define KDKOE UC(0x00D8)
#define KDKAA UC(0x00C5)
