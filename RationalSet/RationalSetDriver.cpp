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

using namespace std;

int main() {
  RationalSet cRatSetOne, cRatSetTwo, cRatSetIntersection;
  Rational cRationalOne(1, 100), cRationalTwo(2, 400),
    cRationalThree(3, 900), cRationalFour;

  cRatSetOne.add(cRationalOne);
  cRatSetOne.add(cRationalTwo);
  cRatSetOne.add(cRationalThree);

  cRationalFour = cRationalOne.multiply(cRationalTwo);

  cRatSetTwo.add(cRationalFour);
  cRatSetTwo.add(cRationalOne);

  cout << "\nSET ONE: \n";
  cRatSetOne.print(cout);

  cout << "\nSET TWO: \n";
  cRatSetTwo.print(cout);

  cRatSetIntersection = cRatSetOne.intersection(cRatSetTwo);

  cout << "\nINTERSECTION OF SETS ONE AND TWO:\n";
  cRatSetIntersection.print(cout);

  cout << "\nprogram ended successfully\n";

  return 0;
}