/*
    module  : stop.c
    version : 1.11
    date    : 06/23/20
*/
#ifndef STOP_C
#define STOP_C

void do_stop(void)
{
    COMPILE;
    if (!stack_empty()) {
	switch (autoput) {
	case 0:
	    break;
	case 1:
	    writefactor(do_pop());
	    break;
	case 2:
	    write_stack();
	    break;
	}
	if (autoput)
	    putchar('\n');
    }
}
#endif
