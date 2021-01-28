#include "../inc/pathfinder.h"

void mx_printstrerr(const char *s) {
    if(s) {
        write(2, s, mx_strlen(s));
    }
}