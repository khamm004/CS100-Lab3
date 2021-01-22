#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
using namespace std;

#include "add.hpp"
#include "op.hpp"

TEST(AddTest, AddEvaluatePositive) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Add* test = new Add(one, two);
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(AddTest, AddStringifyPositive) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Add* test = new Add(one, two);
    EXPECT_EQ(test->stringify(), "(1.000000+2.000000)");
}

TEST(AddTest, AddEvaluateNegative) {
    Op* nThree = new Op(-3);
    Op* two = new Op(2);
    Add* test = new Add(nThree, two);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(AddTest, AddEvaluateNonZero) {
    Op* nThree = new Op(-3);
    Op* two = new Op(2);
    Add* test = new Add(nThree, two);
    EXPECT_EQ(test->stringify(), "(-3.000000+2.000000)");
};

//TEST(AddTest, AddEvaluateWMult) {
//    Op* three = new Op(3);
//    Op* two = new Op(2);
//    Op* five = new Op(5)
//    Mult* A = new Mult(three, two)
//    Add* test = new Add(A, five);
//    EXPECT_EQ(test->evaluate(), 11);
//}
//
//TEST(AddTest, AddStringifyWMult) {
//    Op* three = new Op(3);
//    Op* two = new Op(2);
//    Op* five = new Op(5)
//    Mult* A = new Mult(three, two)
//    Add* test = new Add(A, five);
//    EXPECT_EQ(test->evaluate(), "((3.000000*2.000000)+5.000000)");
//}


#endif
