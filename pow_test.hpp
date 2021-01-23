#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
using namespace std;

#include "pow.hpp"
#include "op.hpp"

TEST(PowTest, PowEvaluatePositive) {
	Op* one = new Op(1);
	Op* two = new Op(2);
    Pow* test = new Pow(one, two);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowStringifyPositive) {
	Op* one = new Op(1);
	Op* two = new Op(2);
    Pow* test = new Pow(one, two);
    EXPECT_EQ(test->stringify(), "(1.000000**2.000000)");
}

TEST(PowTest, PowEvaluateNegative) {
	Op* nThree = new Op(-3);
	Op* two = new Op(2);
    Pow* test = new Pow(nThree, two);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(PowTest, PowEvaluateNonZero) {
	Op* nThree = new Op(-3);
	Op* two = new Op(2);
    Pow* test = new Pow(nThree, two);
    EXPECT_EQ(test->stringify(), "(-3.000000**2.000000)");
}
TEST(PowTest, PowEvaluatePosNeg) {
	Op* nThree = new Op(-3);
	Op* two = new Op(2);
    Pow* test = new Pow(two, nThree);
    EXPECT_EQ(test->evaluate(), .125);
}

TEST(PowTest, PowStringifyPosNeg) {
	Op* nThree = new Op(-3);
	Op* two = new Op(2);
    Pow* test = new Pow(two, nThree);
    EXPECT_EQ(test->stringify(), "(2.000000**-3.000000)");
}


TEST(PowTest, PowEvaluateNegNeg) {
	Op* nThree = new Op(-3);
	Op* nTwo = new Op(-2);
    Pow* test = new Pow(nTwo, nThree);
    EXPECT_EQ(test->evaluate(), -.125);
}

TEST(PowTest, PowStringifyNegNeg) {
	Op* nThree = new Op(-3);
	Op* nTwo = new Op(-2);
    Pow* test = new Pow(nTwo, nThree);
    EXPECT_EQ(test->stringify(), "(-2.000000**-3.000000)");
};

//TEST(PowTest, PowEvaluateWMult) {
//   Op* three = new Op(3);
//   Op* two = new Op(2);
//   Op* five = new Op(5)
//   Mult* A = new Mult(three, two)
//   Pow* test = new Pow(A, five);
//   EXPECT_EQ(test->evaluate(), 7776);
//}
//
//TEST(PowTest, PowStringifyWMult) {
//    Op* three = new Op(3);
//    Op* two = new Op(2);
//    Op* five = new Op(5)
//    Mult* A = new Mult(three, two)
//    Pow* test = new Pow(A, five);
//    EXPECT_EQ(test->evaluate(), "((3.000000*2.000000)**5.000000)");
//}
#endif
