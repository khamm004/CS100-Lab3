#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "mult.hpp"

TEST(MultTest, MultEvaluateBothPos) {
    Op* right = new Op(2);
    Op* left = new Op(5);
    Mult* test = new Mult(left, right);
    
    EXPECT_EQ(test->evaluate(),10.000000 );
}

TEST(MultTest, MultStringifyBothPos) {
    Op* right = new Op(2);
    Op* left = new Op(5);
    Mult* test = new Mult(left, right);

    EXPECT_EQ(test->stringify(), "(5.000000*2.000000)");
}

TEST(MultTest, MultEvaluateBothNeg) {
    Op* right = new Op(-2);
    Op* left = new Op(-5);
    Mult* test = new Mult(left, right);

    EXPECT_EQ(test->evaluate(),10.000000 );
}

TEST(MultTest, MultStringifyBothNeg) {
    Op* right = new Op(-2);
    Op* left = new Op(-5);
    Mult* test = new Mult(left, right);

    EXPECT_EQ(test->stringify(), "(-5.000000*-2.000000)");
}

TEST(MultTest, MultEvaluateDifSigns) {
    Op* right = new Op(-2);
    Op* left = new Op(5);
    Mult* test = new Mult(left, right);

    EXPECT_EQ(test->evaluate(),-10.000000 );
}

TEST(MultTest, MultStringifyDifSigns) {
    Op* right = new Op(-2);
    Op* left = new Op(5);
    Mult* test = new Mult(left, right);

    EXPECT_EQ(test->stringify(), "(5.000000*-2.000000)");
}

#endif //__MULT_TEST_HPP__

