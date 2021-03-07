#include "../inc/pathfinder.h"

// clang -c src/*.c                 
// clang -o a.out *.o -L./libmx -lmx

int main(int argc, char **argv) {
    mx_validation(argc, argv[1]);   // valid argc, file exists, file no empty
    char *file = mx_file_to_str(argv[1]);
    int islands_num_line = mx_atoi(mx_parse_to_ch(file, '\n'));
    mx_valid_line1(islands_num_line, file);

    int bridges[islands_num_line][islands_num_line];
    mx_memset(bridges, 48, islands_num_line*islands_num_line);  // fill array by '0'

    t_islands *isl_list = malloc(sizeof(t_islands));


    mx_map(file, bridges, islands_num_line);


}




// int main(int argc, char **argv) {

//     mx_validation(argc, argv[1]);   // correct argc, file exists, file no empty

//     char *file = mx_file_to_str(argv[1]);
//     int islands_num_line = mx_read_islands_num(file);    // line 1 valid (only digits, > 0), remove line 1

//     // int bridges[islands_num][islands_num];

//     t_islands *islands_list = NULL;
//     int islands_num_list = mx_create_islands_list(islands_list, file);
//     if (islands_num_list != islands_num_line) {
//         mx_print_err("error: invalid number of islands\n");
//         mx_del_islands_list(islands_list);
//         mx_strdel(&file);
//         exit(1);
//     }




    // mx_create_bridges_array(file, **bridges, islands_num);
    




    // mx_printstrn(file);

    

    // mx_valid_line1(mx_atoi(mx_strndup(file, mx_get_char_index(file, '\n'))));

    // mx_printintn(mx_atoi(mx_strndup(file, mx_get_char_index(file, '\n'))));


    
//     mx_printstrn("end");

// }
