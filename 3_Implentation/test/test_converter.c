/*#include "unity.h"
#include "conversion.h"
void setUp(){}
void tearDown(){}
void test_temp(void)
{
  TEST_ASSERT_EQUAL(80.599998, temp(1, 27));
  TEST_ASSERT_EQUAL(11.111111, temp(2, 52));
  TEST_ASSERT_EQUAL(-288.000000, length(1,-24));
  TEST_ASSERT_EQUAL(-4.666667, length(2, -56));
}
void test_length(void)
{
    TEST_ASSERT_EQUAL(24.000000, length(1, 2));
    TEST_ASSERT_EQUAL(2.000000, length(2, 24));
    TEST_ASSERT_EQUAL(-10.886206, weight(1,-24));
    TEST_ASSERT_EQUAL(-123.458714, weight(2, -56));
}
void test_weight(void)
{
    TEST_ASSERT_EQUAL(105.233345, weight(1, 232));
    TEST_ASSERT_EQUAL(114.640234, weight(2, 52));
    TEST_ASSERT_EQUAL(0,numsys(1,-24));
    TEST_ASSERT_EQUAL(0,numsys(2, -56));
}
void test_numsys(void)
{
    TEST_ASSERT_EQUAL(6, numsys(1,110));
}
void test_percentage(void)
{
    TEST_ASSERT_EQUAL(90.833, percentage(600, 545));
    TEST_ASSERT_EQUAL(89.440, percentage(625, 559));
}

 
int test_main(void){
    UNITY_BEGIN();
    RUN_TEST(test_temp);
    RUN_TEST(test_length);
    RUN_TEST(test_weight);
    RUN_TEST(test_numsys);
    RUN_TEST(test_percentage);
    return UNITY_END();
}*/