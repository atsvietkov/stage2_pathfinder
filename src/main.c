#include "../inc/pathfinder.h"

// clang -c src/*.c                 
// clang -o a.out *.o -L./libmx -lmx

int main(int argc, char **argv) {
    mx_valid_argc(argc, argv[0]);
    mx_file_exist(argv[1]);
    mx_file_noempty(argv[1]);

    char *file = mx_file_to_str(argv[1]);
    

    mx_printstrn("end");

}
