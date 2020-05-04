#
#   module  : %M%
#   version : %I%
#   date    : %G%
#

#
#   C version
#
add_executable(fib0 fib0.c)

#
#   Minimal version
#
macro(exe1 src)
add_custom_command(OUTPUT ${src}.c
		   DEPENDS joy ${src}.joy
		   COMMAND joy -c ${src}.joy 2>../runtime.h |
			   clang-format >${src}.c)
add_executable(${src} ../main.c ${src}.c ../print.c)
target_link_libraries(${src} gc-lib m)
endmacro(exe1)

#
#   Normal version
#
macro(exe2 src)
add_custom_command(OUTPUT ${src}.c
		   DEPENDS joy ${src}.joy
		   COMMAND joy -c ${src}.joy 2>../runtime.h |
			   clang-format >${src}.c)
add_executable(${src} ../main.c ${src}.c ../print.c ../yylex.c ../factor.c
	       ../module.c ../lookup.c)
target_link_libraries(${src} gc-lib m)
endmacro(exe2)

exe1(fib)
exe1(gcd)
exe1(test1)
exe1(jp-joytst)
exe1(flatjoy)
exe1(jp-reprodtst)
exe1(modtst)
exe1(jp-nestrec)
exe1(laztst)
exe1(jp-church)
exe1(mtrtst)
exe1(grmtst)
exe1(reptst)
exe1(symtst)
exe1(plgtst)
exe2(tutorial)