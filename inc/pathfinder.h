#pragma once

#include "../libmx/inc/libmx.h"

typedef struct s_islands {
    int id;
    char *name;
}   t_islands;

// void mx_print_track_ids(int start, int finish);

void mx_validation(int argc, char *argv);
void mx_print_err(const char *s);
void mx_valid_argc(int argc);
void mx_file_exist(char *filename);
void mx_file_noempty(char *filename);
void mx_valid_line1(int isl_num);
int mx_read_islands_num(char *file);
void **mx_create_bridges_array(char *file, int **bridges, int islands_num);
void mx_valid_string(char *buffer, char *file);

// bool mx_validation(int argc, char **argv);
// bool mx_argc_valid(argc);
