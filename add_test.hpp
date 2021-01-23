#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
using namespace std;

#include "add.hpp"
#include "op.hpp"

TEST(AddTest, AddEvaluatePosPos) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Add* test = new Add(one, two);
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(AddTest, AddStringifyPosPos) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Add* test = new Add(one, two);
    EXPECT_EQ(test->stringify(), "(1.000000+2.000000)");
}

TEST(AddTest, AddEvaluateNegPos) {
    Op* nThree = new Op(-3);
    Op* two = new Op(2);
    Add* test = new Add(nThree, two);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(AddTest, AddStringifyNegPos) {
    Op* nThree = new Op(-3);
    Op* two = new Op(2);
    Add* test = new Add(nThree, two);
    EXPECT_EQ(test->stringify(), "(-3.000000+2.000000)");
}

TEST(AddTest, AddEvaluatePosNeg) {
	Op* nThree = new Op(-3);
	Op* two = new Op(2);
    Add* test = new Add(two, nThree);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(AddTest, AddStringifyPosNeg) {
	Op* nThree = new Op(-3);
	Op* two = new Op(2);
    Add* test = new Add(two, nThree);
    EXPECT_EQ(test->stringify(), "(2.000000+-3.000000)");
}


TEST(AddTest, AddEvaluateNegNeg) {
	Op* nThree = new Op(-3);
	Op* nTwo = new Op(-2);
    Add* test = new Add(nTwo, nThree);
    EXPECT_EQ(test->evaluate(), -5);
}

TEST(AddTest, AddStringifyNegNeg) {
	Op* nThree = new Op(-3);
	Op* nTwo = new Op(-2);
    Add* test = new Add(nTwo, nThree);
    EXPECT_EQ(test->stringify(), "(-2.000000+-3.000000)");
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
