#include "pch.h"
#include "RationalSet.h"
#include <iostream>

using namespace std;

TEST (TestingConstructor, DefaultValues) {
  RationalSet cRatSet;

  EXPECT_EQ (cRatSet.size (), 0);
}

TEST (TestingAdd, AddingRationals) {
  RationalSet cRatSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet.add (cRat1);
  cRatSet.add (cRat2);
  cRatSet.add (cRat3);

  EXPECT_EQ (cRatSet.size (), 3);
}

TEST (TestingAdd, AddingExistingRational) {
  RationalSet cRatSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet.add (cRat1);
  cRatSet.add (cRat2);
  cRatSet.add (cRat3);

  EXPECT_EQ (cRatSet.size (), 3);

  cRatSet.add (cRat1);
  EXPECT_EQ (cRatSet.size (), 3);
}

TEST (TestingCopyConstructor, AddingRationals) {
  RationalSet cRatSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet.add (cRat1);
  cRatSet.add (cRat2);
  cRatSet.add (cRat3);

  EXPECT_EQ (cRatSet.size (), 3);
  RationalSet cRatSet2 (cRatSet);
  EXPECT_EQ (cRatSet.size (), 3);
}


TEST (TestingIsIn, isIn) {
  RationalSet cRatSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet.add (cRat1);
  cRatSet.add (cRat2);
  cRatSet.add (cRat3);

  EXPECT_TRUE (cRatSet.isIn (cRat1));
}

TEST (TestingIsIn, notIn) {
  RationalSet cRatSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet.add (cRat1);
  cRatSet.add (cRat2);

  EXPECT_FALSE (cRatSet.isIn (cRat3));
}

TEST (TestingAddOperator, EmptyDifferentSet) {
  RationalSet cRatSet, cRatNewSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet.add (cRat1);
  cRatSet.add (cRat2);

  EXPECT_EQ (cRatSet.size (), 2);
  EXPECT_EQ (cRatNewSet.size (), 0);

  cRatNewSet = cRatSet + cRat3;
  EXPECT_EQ (cRatNewSet.size (), 3);
}

TEST (TestingAddOperator, NonEmptyDifferentSet) {
  RationalSet cRatSet, cRatNewSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet.add (cRat1);
  cRatSet.add (cRat2);
  cRatNewSet.add (cRat1);

  EXPECT_EQ (cRatSet.size (), 2);
  EXPECT_EQ (cRatNewSet.size (), 1);

  cRatNewSet = cRatSet + cRat3;
  EXPECT_EQ (cRatNewSet.size (), 3);
}

TEST (TestingAddOperator, NonEmptySameSet) {
  RationalSet cRatSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet.add (cRat1);
  cRatSet.add (cRat2);

  EXPECT_EQ (cRatSet.size (), 2);

  cRatSet = cRatSet + cRat3;
  EXPECT_EQ (cRatSet.size (), 3);
}

TEST (TestingAddOperator, EmptySameSet) {
  RationalSet cRatSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet = cRatSet + cRat3;
  cRatSet = cRatSet + cRat2;
  cRatSet = cRatSet + cRat1;

  EXPECT_EQ (cRatSet.size (), 3);
}

TEST (TestingAddOperator, EmptySameSetSameRational) {
  RationalSet cRatSet;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cRatSet = cRatSet + cRat3;
  cRatSet = cRatSet + cRat2;
  cRatSet = cRatSet + cRat1;

  EXPECT_EQ (cRatSet.size (), 3);

  cRatSet = cRatSet + cRat1;
  EXPECT_EQ (cRatSet.size (), 3);
}

TEST (TestingEquals, SameSets) {
  RationalSet cSet1;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cSet1 = cSet1 + cRat3;
  cSet1 = cSet1 + cRat2;
  cSet1 = cSet1 + cRat1;

  RationalSet cSet2 (cSet1);
  EXPECT_TRUE (cSet1 == cSet2);
}

TEST (TestingEquals, DifferentSets) {
  RationalSet cSet1;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);

  cSet1 = cSet1 + cRat3;
  cSet1 = cSet1 + cRat2;

  RationalSet cSet2 (cSet1);

  cSet1 = cSet1 + cRat1;

  EXPECT_FALSE (cSet1 == cSet2);
}

TEST (TestingOutput, NonEmptyOutput) {
  RationalSet cSet1;
  Rational cRat1 (3, 4), cRat2 (8, 9), cRat3 (1, 4);
  stringstream cStream;

  cSet1 = cSet1 + cRat3;
  cSet1 = cSet1 + cRat2;
  cSet1 = cSet1 + cRat1;

  cStream << cSet1;

  EXPECT_EQ (cStream.str (), "1/4 8/9 3/4 ");
}

TEST (TestingOutput, EmptyOutput) {
  RationalSet cSet1;
  stringstream cStream;

  cStream << cSet1;

  EXPECT_EQ (cStream.str (), "");
}

TEST (TesingInput, EmptySet) {
  RationalSet cSet, cSet2;
  stringstream cStream ("1/2 5/6 9/2 23/89");
  Rational cRat1 (1, 2), cRat2 (5, 6), cRat3 (9, 2), cRat4 (23, 89);

  cSet2 = cSet2 + cRat1;
  cSet2 = cSet2 + cRat2;
  cSet2 = cSet2 + cRat3;
  cSet2 = cSet2 + cRat4;

  cStream >> cSet;

  EXPECT_EQ (cSet.size (), 4);
  EXPECT_TRUE (cSet == cSet2);
}