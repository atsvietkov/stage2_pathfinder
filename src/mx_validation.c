#include "../inc/pathfinder.h"

void mx_validation(int argc, char *argv) {
    mx_valid_argc(argc);
    mx_file_exist(argv);
    mx_file_noempty(argv);
}
