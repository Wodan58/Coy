/*
    module  : setecho.c
    version : 1.9
    date    : 01/19/20
*/
#ifndef SETECHO_C
#define SETECHO_C

/**
setecho  :  I  ->
Sets value of echo flag for listing.
I = 0: no echo, 1: echo, 2: with tab, 3: and linenumber.
*/
void do_setecho(void)
{
#ifdef COMPILING
    UNARY;
    setechoflag(do_pop());
#endif
}
#endif
