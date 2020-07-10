#include "unity.h"

#include <stdlib.h>
#include <string.h>

#include "graph.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_actions_added(void)
{
    char *actions[] = { "action1", "action number 2" };
    node_t *root = new_node(2, actions);
    TEST_ASSERT_TRUE( strcmp(root->actions[0], "action1") == 0 );
    TEST_ASSERT_TRUE( strcmp(root->actions[1], "action number 2") == 0 );
    delete_node(root);
}
