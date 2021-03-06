/*
    module  : put1.c
    version : 1.3
    date    : 06/23/20
*/
#ifndef PUT1_C
#define PUT1_C

/**
put1  :  X  ->
Writes X to output, pops X off stack.
*/
void do_put1(void)
{
    COMPILE1;
    if (!stack_empty()) {
	writefactor(do_pop());
	putchar(' ');
    }
}
#endif
