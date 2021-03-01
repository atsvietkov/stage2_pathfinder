#include "../inc/pathfinder.h"

int mx_read_islands_num(char *file) {
    int islands_num = mx_atoi(mx_strndup(file, mx_get_char_index(file, '\n')));
    if (islands_num < 1) {
        mx_print_err("error: line 1 is not valid\n");
        mx_strdel(&file);
        exit(1);
    }
    char *file_cpy = mx_strdup(file + mx_get_char_index(file, '\n') + 1);
    mx_memset(file, 0, sizeof(char)*mx_strlen(file));
    mx_strcpy(file, file_cpy);
    mx_strdel(&file_cpy);
    return islands_num;
}
