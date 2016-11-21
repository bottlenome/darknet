#include "gtest/gtest.h"
extern "C"{
#include "utils.h"
};

TEST(read_map, normal)
{
    int *ret = read_map("./tests/testcases/test.map");
    ASSERT_EQ(10, *ret);
}

TEST(sorta_suffle, normal)
{
    int array[5] = {1, 2, 3, 4, 5};
    sorta_shuffle((void*)array, 5, sizeof(int), 5);
}

TEST(shffleTest, normal)
{
    char array[1024] = {0};
    shuffle((void*)array, 10, 38);
}
