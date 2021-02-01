#include "../inc/pathfinder.h"

void mx_valid_line1(int isl_num) {
    if (isl_num < 1) {
        mx_print_err("error: line 1 is not valid");
        exit(0);
    }
}
