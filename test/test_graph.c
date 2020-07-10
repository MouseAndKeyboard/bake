#include "unity.h"

#include <stdlib.h>

#include "graph.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_create_graph(void)
{
    node_t *root = malloc(sizeof(node_t));
    free(root);
}
