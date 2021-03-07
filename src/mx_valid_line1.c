#include "../inc/pathfinder.h"

void mx_valid_line1(int isl_num, char *file) {
    if (isl_num < 1) {
        mx_print_err("error: line 1 is not valid\n");
        mx_strdel(&file);
        exit(1);
    }
}
