#include "spam.h"

#define CONDITIONAL_HOG(_)\
    _(IF_A, -1)\
    _(IF_B, -2)\
    _(IF_C, -3)

SPAM(CONDITIONAL_HOG, Condition);

#define Enum_HOG(_)\
    _(A, 0)\
    _(B, A ? 1 : IF_A)\
    _(C, B > 0 ? 2 : IF_B)\
    _(D, C > 0 ? 3 : IF_C)\
    _(SOMETHING_ELSE, 15)\

SPAM(Enum_HOG, Enum);

#define UNVALID_HOG(_)\
    _(E, 4)\
    _(FAKE_B, 1)\

SPAM(UNVALID_HOG, Unvalid);