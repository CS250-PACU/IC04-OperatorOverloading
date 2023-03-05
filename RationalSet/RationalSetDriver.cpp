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
void compareTwoSets (const RationalSet& cSet1,
  const RationalSet& cSet2);
void readSetFromFile (RationalSet& cSet);

int main () {
  RationalSet cFileSet, cRatSet, cRatSet2, cRationalSet1;
  Rational cR1 (5, 6);

  //cout << "\nCreating first test set:\n";
  //createTestSet (cRatSet);
  //cout << cRatSet << endl;

  //cout << endl << cRatSet << " + " << cR1 << " = ";
  //cRatSet = cRatSet + cR1;
  //cout << cRatSet << endl;

  //cout << "\nCreating second test set:\n";
  //createTestSet (cRatSet2);
  //cout << cRatSet2 << endl;

  //compareTwoSets (cRatSet, cRatSet2);

  //compareTwoSets (cRatSet2, cRatSet2);

  //readSetFromFile (cFileSet);

  return EXIT_SUCCESS;
}

//void createTestSet (RationalSet& cSet1) {
//  Rational cR1 (3, 4), cR2 (8, 3), cR3 (90 / 4);
//
//  cSet1.add (cR1);
//  cSet1.add (cR2);
//  cSet1.add (cR3);
//}
//
//void compareTwoSets (const RationalSet& cSet1,
//  const RationalSet& cSet2) {
//  cout << "\nDoes " << cSet1 << " equal " << cSet2 << "?\n";
//  if (cSet1 == cSet2) {
//    cout << "YES! They are equal.\n";
//  }
//  else {
//    cout << "NO! They are not equal.\n";
//  }
//}
//
//void readSetFromFile (RationalSet& cSet) {
//  ifstream inputRational;
//
//  inputRational.open ("RationalNumbers.txt");
//
//  cout << "\nCreating a set from a file of rationals\n";
//  inputRational >> cSet;
//
//  inputRational.close ();
//
//  cout << cSet << endl;
//}