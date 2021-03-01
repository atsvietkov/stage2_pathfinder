#include "../inc/pathfinder.h"

void mx_valid_argc(int argc) {
    if (argc != 2) {
        mx_print_err("usage: ./pathfinder [filename]\n");
        exit(1);
    }
}
