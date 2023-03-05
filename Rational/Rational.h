#pragma once
//*********************************************************************
// File name:  Rational.h
// Author:     CS, Pacific University
// Date:       3/4/23
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Interface for Rational class 
//*********************************************************************

#include <iostream>

using namespace std;

class Rational {
public:
	Rational(int numerator = 0, int denominator = 1);

	int getNumerator () const;
	int getDenominator () const;

	Rational operator * (const Rational& rcRat) const;
	bool operator == (const Rational& rcRat) const;

	friend ostream& operator << (ostream& rcStream,
		const Rational& rcRat);
	friend istream& operator >> (istream& rcStream,
		Rational& rcRat);

private:
	int mNumerator;
	int mDenominator;
};