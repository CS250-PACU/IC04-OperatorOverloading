//*********************************************************************
// File name:  test.cpp
// Author:     CS, Pacific University
// Date:       3/4/23
// Class:      CS250
// Assignment: Rational and RationalSet Operator Overloading 
// Purpose:    Unit tests for Rational
//*********************************************************************

#include "pch.h"
#include "Rational.h"
#include <iostream>

using namespace std;

TEST (TestingConstructor, DefaultValues) {
  Rational cRat;

  EXPECT_EQ (cRat.getNumerator (), 0);
  EXPECT_EQ (cRat.getDenominator (), 1);
}

TEST (TestingConstructor, PassedInPositiveValues) {
  Rational cRat (3, 79);

  EXPECT_EQ (cRat.getNumerator (), 3);
  EXPECT_EQ (cRat.getDenominator (), 79);
}

TEST (TestingConstructor, PassedInNegativeValues) {
  Rational cRat (3, -79);

  EXPECT_EQ (cRat.getNumerator (), 3);
  EXPECT_EQ (cRat.getDenominator (), -79);
}

TEST (TestingMultiply, PositiveNumbers) {
  Rational cRat1 (3, 4), cRat2 (7, 2), cRat3;

  cRat3 = cRat1 * cRat2;

  EXPECT_EQ (cRat3.getNumerator (), 21);
  EXPECT_EQ (cRat3.getDenominator (), 8);
}

TEST (TestingMultiply, NegativeNumbers) {
  Rational cRat1 (-3, -4), cRat2 (-7, -2), cRat3;

  cRat3 = cRat1 * cRat2;

  EXPECT_EQ (cRat3.getNumerator (), 21);
  EXPECT_EQ (cRat3.getDenominator (), 8);
}

TEST (TestingMultiply, MixedNumbers) {
  Rational cRat1 (3, -4), cRat2 (-7, 2), cRat3;

  cRat3 = cRat1 * cRat2;

  EXPECT_EQ (cRat3.getNumerator (), -21);
  EXPECT_EQ (cRat3.getDenominator (), -8);
}

TEST (TestingEquals, EqualRationals) {
  Rational cRat1 (5, 8), cRat2 (5, 8);
  EXPECT_TRUE (cRat1 == cRat2);
}

TEST (TestingEquals, UnequalRationals) {
  Rational cRat1 (5, 8), cRat2 (3, 67);
  EXPECT_FALSE (cRat1 == cRat2);
}

TEST (TestingOutput, PositiveRationals) {
  Rational cRat (5, 8);
  stringstream cStream;
  cStream << cRat;
  EXPECT_EQ (cStream.str (), "5/8");
}

TEST (TestingOutput, NegativeNumerator) {
  Rational cRat (-5, 8);
  stringstream cStream;
  cStream << cRat;
  EXPECT_EQ (cStream.str (), "-5/8");
}

TEST (TestingOutput, NegativeDenominator) {
  Rational cRat (5, -8);
  stringstream cStream;
  cStream << cRat;
  EXPECT_EQ (cStream.str (), "5/-8");
}

TEST (TestingOutput, NegativeRationals) {
  Rational cRat (-5, -8);
  stringstream cStream;
  cStream << cRat;
  EXPECT_EQ (cStream.str (), "-5/-8");
}

TEST (TestingInput, PositiveRationals) {
  Rational cRat;
  stringstream cStream ("1/4");
  cStream >> cRat;
  EXPECT_EQ (cRat.getNumerator (), 1);
  EXPECT_EQ (cRat.getDenominator (), 4);
}

TEST (TestingInput, NegativeNumerator) {
  Rational cRat;
  stringstream cStream ("-1/4");
  cStream >> cRat;
  EXPECT_EQ (cRat.getNumerator (), -1);
  EXPECT_EQ (cRat.getDenominator (), 4);
}

TEST (TestingInput, NegativeDenominator) {
  Rational cRat;
  stringstream cStream ("1/-4");
  cStream >> cRat;
  EXPECT_EQ (cRat.getNumerator (), 1);
  EXPECT_EQ (cRat.getDenominator (), -4);
}

TEST (TestingInput, NegativeRationals) {
  Rational cRat;
  stringstream cStream ("-1/-4");
  cStream >> cRat;
  EXPECT_EQ (cRat.getNumerator (), -1);
  EXPECT_EQ (cRat.getDenominator (), -4);
}
