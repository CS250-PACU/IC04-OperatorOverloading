#pragma once
//*********************************************************************
// File name:  Rational.h
// Author:     CS, Pacific University
// Date:       2/13/23
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Interface for Rational class 
//*********************************************************************

#include <iostream>

using namespace std;

class Rational {
public:
	Rational(int numerator = 0, int denominator = 1);
	bool equals(const Rational& rcRational) const;
	void write(ostream& rcOutStream) const;
	Rational multiply(const Rational& rcRational) const;

private:
	int mNumerator;
	int mDenominator;
};