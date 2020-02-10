#include <gtest/gtest.h>

//Should be including a header file instead
int test(); // function in main project

TEST(TestMain, Sample)
{
    int result = test();
    ASSERT_TRUE(result == 42);
}