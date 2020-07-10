#include "build/temp/_test_main.c"
#include "src/main.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_main_NeedToImplement(void)

{

    char *params[] = {"bake"};

    UnityAssertEqualNumber((UNITY_INT)((main(1, params))), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);



}
