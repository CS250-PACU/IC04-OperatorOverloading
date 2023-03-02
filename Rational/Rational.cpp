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
