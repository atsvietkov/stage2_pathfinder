#include "../inc/pathfinder.h"

int mx_create_islands_list(t_islands *islands_list, char *file) {
    char *line = mx_parse_str_to_ch(file, '\n');
    char *buffer1 = mx_parse_str_to_ch(line, '-');
    char *buffer2 = mx_parse_str_to_ch(line, ',');
    
    if(mx_strcmp(buffer1, buffer2) == 0) {
        mx_print_err("error: line 2 is not valid");
        mx_strdel(&file);
        mx_strdel(&line);
        mx_strdel(&buffer1);
        mx_strdel(&buffer2);
        exit(1);
    }

    islands_list = malloc(sizeof(t_islands));
    islands_list->name = buffer1;
    islands_list->id = 1;
    islands_list->next->name = buffer2;
    islands_list->next->id = 2;
    islands_list->next->next = NULL;

    mx_strdel(&line);
    mx_strdel(&buffer1);
    mx_strdel(&buffer2);

    for(int i = 3; file; i++) {
        char *line = mx_parse_str_to_ch(file, '\n');
        char *buffer1 = mx_parse_str_to_ch(line, '-');
        char *buffer2 = mx_parse_str_to_ch(line, ',');
        if(mx_strcmp(buffer1, buffer2) == 0) {
            mx_print_err("error: line ");
            mx_print_err(i);
            mx_print_err(" is not valid\n");
            mx_strdel(&file);
            mx_strdel(&line);
            mx_strdel(&buffer1);
            mx_strdel(&buffer2);
            exit(1);
        }
        mx_add_island(buffer1);
        mx_add_island(buffer2);
        
        mx_strdel(&line);
        mx_strdel(&buffer1);
        mx_strdel(&buffer2);
    }
    int counter = mx_last_island_id(islands_list);
    return counter;
}
