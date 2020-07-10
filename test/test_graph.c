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
    node_t *root = new_node();
    delete_node(root);
}

void test_create_actions(void)
{
    node_t *root = new_node();
    add_action(root, "action1");
    add_action(root, "action number 2");
    TEST_ASSERT_TRUE( strcmp(root->actions[0], "action1") );
    TEST_ASSERT_TRUE( strcmp(root->actions[0], "action2") );
    delete_node(root);
}
