//*********************************************************************
// File name:  RationalDriver.cpp
// Author:     CS, Pacific University
// Date:       2/13/23
// Class:      CS250
// Assignment: Rational
// Purpose:    Test Driver for Rational class
//*********************************************************************

#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
	Rational cRational1(2, 3), cRational2(4, 5);

	cRational1.write(cout);
	cout << endl;

	cRational2.write(cout);
	cout << endl;

	cRational1.multiply(cRational2).write(cout);
	cout << endl;

	return EXIT_SUCCESS;
}