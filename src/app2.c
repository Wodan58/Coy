/*
    module  : app2.c
    version : 1.5
    date    : 01/19/20
*/
#ifndef APP2_C
#define APP2_C

#ifdef UNARY2_X
#undef UNARY2_X
#undef UNARY2_C
#endif

#include "unary2.c"

/**
app2  :  X1 X2 [P]  ->  R1 R2
Obsolescent.  ==  unary2
*/
void do_app2(void)
{
    do_unary2();
}
/* app2 */
#endif
