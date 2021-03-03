#include "../inc/pathfinder.h"

void mx_add_island(char *island_name, t_islands *islands_list) {
    t_islands *temp = islands_list;
    if(mx_find_island(island_name, islands_list) == -1) {
        mx_push_back_island(island_name, islands_list);
    }
    // bool exist = 0;
    // while (temp->next) {
    //     if(mx_strcmp(island_name, temp->name) == 0) {
    //         exist = 1;
    //         break;
    //     }
    // }

}
