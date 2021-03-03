#include "../inc/pathfinder.h"

char *mx_parse_str_to_ch(char *str, char delim) {
    char result = mx_strndup(str, mx_get_char_index(str, delim));
    char *str_cpy = mx_strdup(str);
    mx_memset(str, 0, mx_strlen(str));
    mx_strcpy(str, str_cpy+mx_get_char_index(str, delim)+1);
    mx_strdel(&str_cpy);
    return result;
}
