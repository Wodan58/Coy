/*
    module  : gt.c
    version : 1.3
    date    : 07/23/20
*/
#ifndef GT_C
#define GT_C

/**
gt  :  X Y  ->  B
X and Y are strings or symbols.
Tests whether X is greater than Y.
*/
void do_gt(void)
{
    BINARY;
    stack[-2] = strcmp((char *)(stack[-2] & ~JLAP_INVALID),
		       (char *)(stack[-1] & ~JLAP_INVALID)) > 0;
    do_pop();
}
#endif
