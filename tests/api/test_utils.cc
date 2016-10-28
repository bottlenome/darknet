#include "gtest/gtest.h"
extern "C"{
#include "utils.h"
};

TEST(shffleTest, normal)
{
    char array[1024] = {0};
    shuffle((void*)array, 10, 38);
}
