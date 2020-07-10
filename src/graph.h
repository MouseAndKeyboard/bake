#ifndef GRAPH_H
#define GRAPH_H

typedef struct node {
    struct node *children;
    int child_count;
    char **actions;
} node_t;

#endif // GRAPH_H
