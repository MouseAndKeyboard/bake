#include "unity.h"

#include <stdlib.h>

#include "graph.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_create_node(void)
{
    node_t *root = new_node("node data");
    delete_node(root);
}
