#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "div.hpp"

TEST(DivTest, DivEvaluateBothPos) {
    Op* right = new Op(2);
    Op* left = new Op(6);
    Div* test = new Div(left, right);

    EXPECT_EQ(test->evaluate(),3.000000 );
}

TEST(DivTest, DivStringifyBothPos) {
    Op* right = new Op(2);
    Op* left = new Op(5);
    Div* test = new Div(left, right);

    EXPECT_EQ(test->stringify(), "(5.000000/2.000000)");
}

TEST(DivTest, DivEvaluateBothNeg) {
    Op* right = new Op(-2);
    Op* left = new Op(-6);
    Div* test = new Div(left, right);

    EXPECT_EQ(test->evaluate(),3.000000 );
}

TEST(DivTest, DivStringifyBothNeg) {
    Op* right = new Op(-2);
    Op* left = new Op(-5);
    Div* test = new Div(left, right);

    EXPECT_EQ(test->stringify(), "(-5.000000/-2.000000)");
}

TEST(DivTest, DivEvaluateDifSigns) {
    Op* right = new Op(-2);
    Op* left = new Op(6);
    Div* test = new Div(left, right);

    EXPECT_EQ(test->evaluate(),-3.000000 );
}

TEST(DivTest, DivStringifyDifSigns) {
    Op* right = new Op(-2);
    Op* left = new Op(5);
    Div* test = new Div(left, right);

    EXPECT_EQ(test->stringify(), "(5.000000/-2.000000)");
}

TEST(DivTest, DivEvaluateZeroDenom) {
    Op* right = new Op(0);
    Op* left = new Op(-2);
    Div* test = new Div(left, right);

    EXPECT_EQ(test->evaluate(),0.000000 );
}

TEST(DivTest, DivStringifyZeroDenom) {
    Op* right = new Op(0);
    Op* left = new Op(-2);
    Div* test = new Div(left, right);

    EXPECT_EQ(test->stringify(), "(-2.000000/0.000000)");
}

#endif //__DIV_TEST_HPP__
