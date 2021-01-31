#include "../inc/pathfinder.h"

void mx_valid_argc(int argc, char *filename) {
    if (argc != 2) {
        mx_print_err("usage: ");
        mx_print_err(filename);
        mx_print_err(" [filename]\n");
        exit(0);
    }
}
