#include "../inc/pathfinder.h"

void mx_print_err(const char *s) {
    if(s) {
        write(2, s, mx_strlen(s));
    }
}