#include "../inc/pathfinder.h"

void mx_valid_string(char *buffer, char *file, int counter) {
    char *part1 = mx_strndup(buffer, mx_get_char_index(buffer, '-'));
    char *part2 = mx_strndup(buffer+mx_get_char_index(buffer, '-')+1, mx_get_char_index(buffer+mx_get_char_index(buffer, '-')+1, ','));
    int *part3  = mx_atoi(mx_get_char_index(buffer, ',')+1);
    int i = 0;
    while(part1[i]) {
        if (!mx_isalpha(part[i])
    }
}
