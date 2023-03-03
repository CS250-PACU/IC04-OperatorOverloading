//*********************************************************************
// File name:  RationalSetDriver.cpp
// Author:     CS, Pacific University
// Date:       2/13/23
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Test Driver for RationalSet
//*********************************************************************

#include "RationalSet.h"
#include "Rational.h"
#include <iostream>
#include <fstream>

using namespace std;

void createTestSet (RationalSet& cSet1);

int main () {
  RationalSet cRationalSet, cRatSet;
  Rational cRational, cR1 (5, 6);
  ifstream inputRational;
  ifstream inputRationalSet;

  //createTestSet (cRatSet);
  //cout << cRatSet << endl;

  //cRatSet = cRatSet + cR1;
  //cout << "Added another rational to the set: " << cRatSet << endl;

  //inputRational.open ("RationalNumbers.txt");

  //while (inputRational >> cRational) {
  //  cout << cRational << endl;
  //  // cRationalSet1 = cRationalSet1 + cRational;
  //}

  //inputRational.close ();

  //inputRationalSet.open ("RationalSets.txt");

  //while (inputRationalSet >> cRationalSet) {
  //  cout << cRationalSet << endl;
  //}

  //inputRationalSet.close ();

  return EXIT_SUCCESS;
}

//void createTestSet (RationalSet& cSet1) {
//  Rational cR1 (3, 4), cR2 (8, 3), cR3 (90 / 4);
//
//  cSet1.add (cR1);
//  cSet1.add (cR2);
//  cSet1.add (cR3);
//}