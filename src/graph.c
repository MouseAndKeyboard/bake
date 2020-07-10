#include "graph.h"

#include <stdlib.h>
#include <string.h>

node_t* new_node(int act_count, char **acts)
{
    node_t *n = malloc(sizeof(node_t));

    char *actions[act_count];
    for (int act = 0; act < act_count; act++)
    {
        actions[act] = strdup(acts[act]);
    }

    n->children = NULL;
    n->child_count = 0;
    n->actions = actions;
    n->action_count = act_count;
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
