#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluate) {
    Rand* test = new Rand();
    EXPECT_TRUE((test->evaluate() >= 0) && (test->evaluate() <= 99));
}

TEST(RandTest, RandStringify) {
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), std::to_string(test->evaluate()));
}

#endif //__RAND_TEST_HPP__

