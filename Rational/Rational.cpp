//*********************************************************************
// File name:  Rational.h
// Author:     CS, Pacific University
// Date:       2/13/23
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Implementation for Rational class 
//*********************************************************************

#include "Rational.h"

//*********************************************************************
// Function:    Rational
//
// Description: constructor for a Rational object
//
// Parameters:  numerator - numerator for rational object
//							denominator - denominator for the rational object
//
// Returned:    None
//*********************************************************************

Rational::Rational(int numerator, int denominator) {
	if (numerator < 0 || denominator < 1) {
		cout << "Error: Illegal Positive Rational Number" << endl;
		exit(EXIT_FAILURE);
	}

	mNumerator = numerator;
	mDenominator = denominator;
}

//*********************************************************************
// Function:    equals
//
// Description: test if two rational numbers are equal
//
// Parameters:  rcRational - 
//
// Returned:    True if this object and rcRational are equal, 
//							false if not
//*********************************************************************

bool Rational::equals(const Rational& rcRational) const {
	return mNumerator == rcRational.mNumerator &&
		mDenominator == rcRational.mDenominator;
}

//*********************************************************************
// Function:    write
//
// Description: write the rational to the given rcOutStream
//
// Parameters:  rcOutStream - the stream to write to
//
// Returned:    None
//*********************************************************************
void Rational::write(ostream& rcOutStream) const {
	rcOutStream << mNumerator << '/' << mDenominator;
}

//*********************************************************************
// Function:    multiply
//
// Description: multiplies two rational numbers
//
// Parameters:  rcRational - one of the Rational factors in the product					 
//
// Returned:    A Rational which is the product of the this object and
//						  rcRational
//*********************************************************************

Rational Rational::multiply(const Rational& rcRational) const {
	return Rational(mNumerator * rcRational.mNumerator,
		mDenominator * rcRational.mDenominator);
}