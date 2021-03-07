#include "../inc/pathfinder.h"

void mx_map(char *file, int **bridges, int islands_num_line) {
    t_islands *island_list = NULL;
    for(int line_num = 2; file; line_num++) {
        char *line = mx_parse_str_to_ch(file, '\n');
        char *buffer1 = mx_parse_str_to_ch(line, '-');
        char *buffer2 = mx_parse_str_to_ch(line, ',');
        int   buffer3 = mx_atoi(mx_parse_str_to_ch(line, '\n'));

        mx_valid_line(buffer1, buffer2, buffer3, file, line_num);

        
        mx_push_back_island(island_list, buffer1);
        mx_push_back_island(island_list, buffer2);


        mx_strdel(&line);
    }
    mx_strdel(&file);
}
