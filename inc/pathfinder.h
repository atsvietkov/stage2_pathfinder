#pragma once

#include "../libmx/inc/libmx.h"


void mx_print_err(const char *s);
void mx_valid_argc(int argc, char *filename);
void mx_file_exist(char *filename);
void mx_file_noempty(char *filename);

// bool mx_validation(int argc, char **argv);
// bool mx_argc_valid(argc);
