#include "../inc/pathfinder.h"

// clang -c src/*.c                 
// clang -o a.out *.o -L./libmx -lmx

int main(int argc, char **argv) {

    mx_validation(argc, argv[1]);   // correct argc, file exists, file no empty

    char *file = mx_file_to_str(argv[1]);
    int islands_num = mx_read_islands_num(file);    // line 1 valid (only digits, > 0), remove line 1

    int bridges[islands_num][islands_num];

    mx_create_bridges_array(file, **bridges, islands_num);
    




    // mx_printstrn(file);

    

    // mx_valid_line1(mx_atoi(mx_strndup(file, mx_get_char_index(file, '\n'))));

    // mx_printintn(mx_atoi(mx_strndup(file, mx_get_char_index(file, '\n'))));


    
    mx_printstrn("end");

}
