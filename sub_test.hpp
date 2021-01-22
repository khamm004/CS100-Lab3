#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
using namespace std;

#include "sub.hpp"
#include "op.hpp"

TEST(SubTest, SubEvaluatePositive) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Sub* test = new Sub(two, one);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(SubTest, SubStringifyPositive) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Sub* test = new Sub(two, one);
    EXPECT_EQ(test->stringify(), "(2.000000-1.000000)");
}

TEST(SubTest, SubEvaluateNegative) {
    Op* nThree = new Op(-3);
    Op* two = new Op(2);
    Sub* test = new Sub(nThree, two);
    EXPECT_EQ(test->evaluate(), -5);
}

TEST(SubTest, SubStringifyNegative) {
    Op* nThree = new Op(-3);
    Op* two = new Op(2);
    Sub* test = new Sub(nThree, two);
    EXPECT_EQ(test->stringify(), "(-3.000000-2.000000)");
};

//TEST(SubTest, SubEvaluateWMult) {
//    Op* three = new Op(3);
//    Op* two = new Op(2);
//    Op* five = new Op(5)
//    Mult* A = new Mult(three, two)
//    Sub* test = new Sub(A, five);
//    EXPECT_EQ(test->evaluate(), 1);
//}
//
//TEST(SubTest, SubStringifyWMult) {
//    Op* three = new Op(3);
//    Op* two = new Op(2);
//    Op* five = new Op(5)
//    Mult* A = new Mult(three, two)
//    Sub* test = new Sub(A, five);
//    EXPECT_EQ(test->evaluate(), "((3.000000*2.000000)-5.000000)");
//}

#endif
