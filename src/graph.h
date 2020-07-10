#ifndef GRAPH_H
#define GRAPH_H

typedef struct node {
    struct node *children;
    int child_count;

    char **actions;
    int *action_sizes;
    int action_count;
} node_t;

node_t* new_node(void);
void delete_node(node_t *n);

#endif // GRAPH_H
