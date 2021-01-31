# temp Makefile
.PHONY: all clean uninstall reinstall libmx

all: libmx pathfinder

libmx:
	@make -sC libmx

pathfinder:
	@mkdir -p obj
	clang -c src/*.c -I inc/*.h libmx/inc/libmx.h
	@mv *.o obj
	@ar rcs obj/*.o

clean:
	@rm -rf obj

uninstall: clean
	@rm -rf pathfinder
	