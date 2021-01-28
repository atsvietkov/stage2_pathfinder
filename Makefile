# temp Makefile

all: libmx pathfinder

libmx:
	@make libmx/Makefile

pathfinder:
	@mkdir -p obj
	clang -c src/*.c -I inc/*.h libmx/inc/libmx.h
	@mv *.o obj
	@ar rcs obj/*.o 