#ifndef YouShallNotPass
#define YouShallNotPass

#include <string.h> 

/*          "Lovely Spam, Wonderful Spam."
                                       - Confucius       
*/

/*                   *** SpAm ***
                
                       S tring
                       P ositive
                       A nd
                  ***  M agical  ***   
                        (enum)
                
                   True LOC Unlocked  
*/
                
/*           @Author  -   Tomer Ussishkin
             @Email - tomer.uss@gmail.com
             @GitHub   -    @Focault   */

         /* https://github.com/Focault/SPAM */

  /* //! NEVER FORGET TO SET A KITCHEN WHEN MAKING SPAM !\\ 
  */

 /* Video Documentation - https://www.dailymotion.com/video/x2hwqlw */

#define BROMLEY _
#define BON(a_menu_for_a_restaurant_in, _Finland) a_menu_for_a_restaurant_in##BROMLEY##_Finland




/*   
*          ********* How To Make Spam *********           *
*/


/*
* Step 1 - Raising The Hog */

/* Preferably in a header: */

/* #define ENUM_HOG(_)\
            _(PIGGLET_ONE, 0)\ 
            _(PIGGLET_TWO, 1)\ 
            _(PIGGLET_THREE, 2)\ 
            _(PIGGLET_SIX, 5) */

/*
* Step 2 - Making Spam */

/* Preferably in a header: */

/* SPAM(ENUM_HOG, EnumNameT); */

/*
* Step 3 - Setting a Kitchen */

/*// ! This Must Be Done In a SOURCE FILE ! */

/* KITCHEN(ENUM_HOG, EnumNameT); */

/*
* Step 4 - Addressing The Kitchen */

/* Can be done anywhere: */

/* bool BON(EnumNameT, isValid)(PIGGLET_ONE); */

/* bool BON(EnumNameT, isStringValid)("PIGGLET_ONE"); */

/* const char* BON(EnumNameT, toString)(PIGGLET_ONE); */
     /* returns "-1" on failure  */

/* EnumNameT BON(EnumNameT, fromString)("PIGGLET_ONE"); */


/*
                      * Q & A *
*/

/*

 ? Is Spamed enum's can still be used as a regular enum?

 Yes! SPAM creates an enum inside of it's delicious meat.

 ? What is The Time and Space Complexities of a SPAM?

 Creating a SPAM has no time or space complexities as it
 is a pre-proccessing operation.

 Using SPAM as a enum has no extra cost what-so-ever, 
 except for the code it manufactures.

 The BONs isValid and toString has O(1) T & S Complexities.

 However, The BONs isStringValid and fromString has 
 O(n * Average_SPAM_descriptor_Length) Time Complexity
 and O(1) Space complexity.

*/


#define LOVELY(spam) case spam:
#define _SPAM(spam) if(!strcmp(#spam, _spam))
#define EGG_AND_SPAM(__spam) __##__spam##_UNKNOWN_refill__
#define EGG_BACON_AND_SPAM(spam, __spam_)spam = __spam_,
#define EGG_BACON_SAUSAGE_AND_SPAM(spam, __spam_)LOVELY(spam) return true;
#define SPAM_EGG_SPAM_SPAM_BACON_AND_SPAM(spam, __spam_)LOVELY(spam) return #spam;
#define SPAM_SPAM_SPAM_EGG_AND_SPAM(spam, __spam_)_SPAM(spam) return true;
#define SPAM_SPAM_SPAM_SPAM_SPAM_SPAM_BAKED_BEANS_SPAM_SAPM_AND_SPAM(spam, __spam_)_SPAM(spam) return spam;

#define LOBSTER_THERMIDOR_AUX_CRAVETTES_WITH_MORNAY_SAUCE_GARNISHED_WITH_TRUFFLE_PATE(__EXTRA_SPAM__, __spam)\
typedef enum __spam{__EXTRA_SPAM__(EGG_BACON_AND_SPAM)EGG_AND_SPAM(__spam)}    /* LOVELY SPAM */       __spam;
#define _SPAM_THE_SPAM(__SMARTENUM_FUNCTION, __spam)      /* WONDERFUL SPAM */   __SMARTENUM_FUNCTION(__spam);
#define _QUALATY_SPAM(__spam)            /* LOVELY SPAM */            bool BON(__spam, isValid)(__spam refill)
#define SPAM_FRIED_EGGS_AND_SPAM(__spam) /* WONDERFUL SPAM */ const char* BON(__spam, toString)(__spam refill)
#define _IS_SPAM(__spam)bool BON(__spam, isStringValid)        /* LOVELY SPAM */           (const char* _spam)
#define __SPAM_SUPLLY(__spam)       /* WONDERFUL SPAM */     __spam BON(__spam, fromString)(const char* _spam)
#define IS_SPAM(__EXTRA_SPAM__, __spam)     /* LOVELY SPAM */  /* WONDERFUL SPAM */     _QUALATY_SPAM(__spam)\
{switch(refill)       /* LOVELY SPAM */  /* WONDERFUL SPAM */     {__EXTRA_SPAM__(EGG_BACON_SAUSAGE_AND_SPAM)\
    default: /* LOVELY SPAM */  /* WONDERFUL SPAM */  /* LOVELY SPAM */  /* WONDERFUL SPAM */  return false;}}
#define SPAM_FOR_TABLE1(__EXTRA_SPAM__, __spam)/*LOVELY SPAM*/SPAM_FRIED_EGGS_AND_SPAM(__spam){switch(refill)\
{__EXTRA_SPAM__(SPAM_EGG_SPAM_SPAM_BACON_AND_SPAM)        /* WONDERFUL SPAM */         default: return "-1";}}
#define IS_SPAMM(__EXTRA_SPAM__, __spam)         _IS_SPAM(__spam){__EXTRA_SPAM__(SPAM_SPAM_SPAM_EGG_AND_SPAM)\
return    /* SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM */   false;}
#define BUY_MORE_SPAM(__EXTRA_SPAM__, __spam) /* SPAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAM */  __SPAM_SUPLLY(__spam)\
{__EXTRA_SPAM__(SPAM_SPAM_SPAM_SPAM_SPAM_SPAM_BAKED_BEANS_SPAM_SAPM_AND_SPAM) 	return  EGG_AND_SPAM(__spam);}

#define SPAM(__EXTRA_SPAM__, __spam)\
LOBSTER_THERMIDOR_AUX_CRAVETTES_WITH_MORNAY_SAUCE_GARNISHED_WITH_TRUFFLE_PATE(__EXTRA_SPAM__, __spam)\
_SPAM_THE_SPAM(_QUALATY_SPAM, __spam)\
_SPAM_THE_SPAM(SPAM_FRIED_EGGS_AND_SPAM, __spam)\
_SPAM_THE_SPAM(_IS_SPAM, __spam)\
_SPAM_THE_SPAM(__SPAM_SUPLLY, __spam)\

#define KITCHEN(__EXTRA_SPAM__, __spam)\
IS_SPAM(__EXTRA_SPAM__, __spam)\
SPAM_FOR_TABLE1(__EXTRA_SPAM__, __spam)\
IS_SPAMM(__EXTRA_SPAM__, __spam)\
BUY_MORE_SPAM(__EXTRA_SPAM__, __spam)

#endif /* YouShallNotPass */