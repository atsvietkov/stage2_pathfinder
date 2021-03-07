#include "../inc/pathfinder.h"

int mx_push_back_island(t_islands **island_list, char *name) {
    t_islands *node = mx_create_node_islands(name);
    if(island_list == NULL || *island_list == NULL) {
        *island_list = node;
    }
    else {
        t_islands *tmp = *islands_list;
        while(tmp->next) {
            tmp = tmp->next;
        }
        tmp->next = node;
    }
}

