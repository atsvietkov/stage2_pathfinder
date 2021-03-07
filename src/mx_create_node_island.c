#include "../inc/pathfinder.h"

t_islands *mx_create_node(char *name) {
    t_islands *node = malloc(sizeof(t_islands));
    if(!name) {
        return NULL;
    }
    else {
        node->name = name;
        node->id = 0;
        node->next = NULL;
        return node;
    }
}
