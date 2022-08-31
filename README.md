# SPAM - a String Positive And Magical enum - True LOC Unlocked

SPAM is a LOC tool to help you consentrate bi-directional num-string global identificators at one spot, without memory cost and at minimal time complexity.

## How Does it Works?

The Magic is based on Macro X manipulations, and it's core mechanism is thourogly described [in this article](https://www.codeproject.com/Articles/1118009/A-Smart-Enum-library-in-C-using-X-macros) by [@FredBienvenu](https://www.codeproject.com/script/Membership/View.aspx?mid=10721142).

The Pazzaz of the magic is the addition of the silly logic rules that I constructed in orded to remember that this is not just an enum - and therefor should be handeled with care.

I hope it will help you allways remember setting a kitchen when you are making SPAM.

## Dependencies

None, though VScode's [better comments extention](https://marketplace.visualstudio.com/items?itemName=aaron-bond.better-comments) would make the code shine.

## How To Make Spam

### step 1 - Raising The Hog

Preferably in a header file:
```
#define ENUM_HOG(_)\
    _(PIGGLET_ONE, 0)\ 
    _(PIGGLET_TWO, 1)\ 
    _(PIGGLET_THREE, 2)\ 
    _(PIGGLET_SIX, 5)
```            
### step 2 - Making Spam

Preferably in a header file:
```
SPAM(ENUM_HOG, EnumNameT);
```            
### step 3 - Setting a Kitchen

This Must Be Done In a SOURCE FILE :
```
KITCHEN(ENUM_HOG, EnumNameT);
```            
### step 4 - Addressing the Kitchen

Can be done anywhere:
```
bool BON(EnumNameT, isValid)(PIGGLET_ONE);
bool BON(EnumNameT, isStringValid)("PIGGLET_ONE");
const char* BON(EnumNameT, toString)(PIGGLET_ONE);
     /* returns "-1" on failure  */
EnumNameT BON(EnumNameT, fromString)("PIGGLET_ONE");
```

## Q & A

### Does Spammed enum's can still be used as a regular enum?

Yes! SPAM creates an enum inside of it's delicious meat.

### What is The Time and Space Complexities of a SPAM?

 Creating a SPAM has no time or space complexities as it
 is a pre-proccessing operation.

 Using SPAM as a enum has no extra cost what-so-ever, 
 except for the code it manufactures.

 The BONs isValid and toString has O(1) T & S Complexities.

 However, The BONs isStringValid and fromString has 
 O(n * Average_SPAM_descriptor_Length) Time Complexity
 and O(1) Space complexity.

## Author

* [@Focault](https://github.com/Focault)

## Inspiration

* [Tech](https://www.codeproject.com/Articles/1118009/A-Smart-Enum-library-in-C-using-X-macros)
* [Pazzaz](https://www.dailymotion.com/video/x2hwqlw)
