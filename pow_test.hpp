#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__
#include <cmath>
#include "gtest/gtest.h"
#include <iostream>
using namespace std;
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "sub.hpp"
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
}
TEST(PowTest, PowEvaluateNAN) {
	Op* A = new Op(-3.5);
    Pow* test = new Pow(A, A);
    cout << "Invalid output" << endl;
}

TEST(PowTest, PowEvaluateInvalid) {
        Op* nTwo = new Op(-2);
	Op* fraction = new Op(1.5);
    Pow* test = new Pow(nTwo, fraction);
    cout << "Invalid output"<< endl;
}

TEST(PowTest, PowEvaluateWDiv) {
	Op* five = new Op(5);
	Op* two = new Op(2);
  Div* A = new Div(five, two);
  Pow* test = new Pow(A, two);
  EXPECT_EQ(test->evaluate(), 6.25);
}

TEST(PowTest, DivEvaluateWPowSub) {
	Op* three = new Op(3);
	Op* two = new Op(2);
	Op* four = new Op(4);
  Pow* A = new Pow(two, three);
	Sub* B = new Sub(A,four);
  Div* test = new Div(B, two);
  EXPECT_EQ(test->evaluate(), 2);
}

TEST(PowTest, PowEvaluateWMult) {
   Op* three = new Op(3);
   Op* two = new Op(2);
   Op* five = new Op(5);
   Mult* A = new Mult(three, two);
   Pow* test = new Pow(A, five);
   EXPECT_EQ(test->evaluate(), 7776);
};
#endif
