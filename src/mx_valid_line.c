#include "../inc/pathfinder.h"

void mx_valid_line(char *str1, char *str2, int bridge_len, char *file, int line_num) {
    bool invalid = 0;
    if(mx_strcmp(str1, str2) == 0) {
        invalid = 1;
    }
    if(invalid == 0) {
        for (int i = 0; str1[i]; i++) {
            if(!mx_isalpha(str1[i])) {
                invalid = 1;
            }
        }
    }
    if(invalid == 0) {
        for (int i = 0; str2[i]; i++) {
            if(!mx_isalpha(str2[i])) {
                invalid = 1;
            }
        }
    }
    if(invalid == 0 && bridge_len < 1) {
        invalid = 1;
    }
    if(invalid == 1) {
        mx_print_err("error: line ");
        mx_print_err(line_num);
        mx_print_err(" is not valid\n");
        mx_strdel(&file);
        mx_strdel(&str1);
        mx_strdel(&str2);
        exit(1);
    }
}
