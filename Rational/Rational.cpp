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

Rational::Rational (int numerator, int denominator) {
	if (denominator == 0) {
		exit (EXIT_FAILURE);
	}

	mNumerator = numerator;
	mDenominator = denominator;
}

//*********************************************************************
// Function:    getNumerator
//
// Description: Accessor function for numerator
//
// Parameters:  None
//
// Returned:    The value of the numerator
//*********************************************************************

int Rational::getNumerator () const {
	return mNumerator;
}

//*********************************************************************
// Function:    getDenominator
//
// Description: Accessor function for denominator
//
// Parameters:  None
//
// Returned:    The value of the denominator
//*********************************************************************

int Rational::getDenominator () const {
	return mDenominator;
}

//*********************************************************************
// Function:    operator *
//
// Description: Multiplies two Rational objects
//
// Parameters:  rcRat - Rational object to multiply
//
// Returned:    A Rational object that is the result of multiplying
//              rcRat to calling object
//*********************************************************************

Rational Rational::operator * (const Rational& rcRat) const {
	return rcRat;
}

//*********************************************************************
// Function:    operator ==
//
// Description: Compares two Rational objects
//
// Parameters:  rcRat - Rational object to compare
//
// Returned:    true if rcRat and calling object are equal, 
//							otherwise returns false
//*********************************************************************

bool Rational::operator == (const Rational& rcRat) const {
	return true;
}

//*********************************************************************
// Function:    operator <<
//
// Description: Outputs the Rational object to the stream in the form
//							mNumerator/mDenominator
//
// Parameters:  rcStream - the output stream
//							rcRat	   - the Rational object to be output to stream
//
// Returned:    The modifid output stream
//*********************************************************************

ostream& operator << (ostream& rcStream, const Rational& rcRat) {
	
	return rcStream;
}

//*********************************************************************
// Function:    operator >>
//
// Description: Inputs the Rational object from the stream in the form
//							mNumerator/mDenominator
//
// Parameters:  rcStream - the input stream
//							rcRat	   - the Rational object to be read in from the 
//												 stream
//
// Returned:    The modifid input stream
//*********************************************************************

istream& operator >> (istream& rcStream, Rational& rcRat) {
	
	return rcStream;
}