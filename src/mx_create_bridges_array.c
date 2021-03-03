#include "../inc/pathfinder.h"

void **mx_create_bridges_array(char *file, int **bridges, int islands_num, t_islands islands_list) {
    for(int i = 1 ;; i++) {
        char *line = mx_strndup(file, mx_get_char_index(file, '\n'));

        mx_valid_string(line, file, i);

        char *buffer1 = mx_parse_str_to_ch(line, '-');
        char *buffer2 = mx_parse_str_to_ch(line, ',');
        char *buffer3 = mx_parse_str_to_ch(line, '\n');
        int bridge_len = mx_atoi(buffer3);

        mx_add_island(buffer1, islands_list);
        mx_add_island(buffer2, islands_list);
        int x = mx_find_island(buffer1, islands_list);
        int y = mx_find_island(buffer2, islands_list);

        if(bridges[x][y] != 0 || bridges[y][x] != 0) {
            // error
        }


        char *file_cpy = mx_strdup(file + mx_get_char_index(file, '\n') + 1);
        mx_memset(file, 0, sizeof(char)*mx_strlen(file));
        mx_strcpy(file, file_cpy);
        mx_strdel(&file_cpy);

        // mx_add_island(mx_strndup(buffer0, mx_get_char_index(buffer0, '-')));

        // char *buffer1 = mx_strndup(buffer0+mx_get_char_index(buffer0, '-') + 1);
        // mx_add_island(mx_strndup(buffer1, mx_get_char_index(buffer1, ',')));

        // mx_add_bridge()
        
    }
    
    
}
