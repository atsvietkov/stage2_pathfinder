#include "../inc/pathfinder.h"

void mx_file_noempty(char *filename) {
    char *str = mx_file_to_str(filename);
    if(mx_strlen(str) == 0) {
        mx_print_err("error: file ");
        mx_print_err(filename);
        mx_print_err(" is empty\n");
        exit(0);
    } 
}