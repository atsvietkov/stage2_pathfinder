#include "../inc/pathfinder.h"

void mx_file_exist(char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        mx_print_err("error: file ");
        mx_print_err(filename);
        mx_print_err(" does not exist\n");
        exit(0);
    }
    close(fd);
}
