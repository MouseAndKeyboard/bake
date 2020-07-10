#include "graph.h"

#include <stdlib.h>

node_t* new_node()
{
    node_t *n = malloc(sizeof(node_t));
    n->children = NULL;
    n->child_count = 0;
    n->actions = NULL;
    n->action_count = 0;
    return n;
}

void delete_node(node_t *n)
{
    for (int i = 0; i < n->action_count; i++)
    {
        free(n->actions[i]);
    }
    free(n);
}
