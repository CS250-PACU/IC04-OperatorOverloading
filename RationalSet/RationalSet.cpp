//*********************************************************************
// File name:  RationalSet.cpp
// Author:     CS, Pacific University
// Date:       3/4/23
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Implementation for class RationalSet. 
//********************************************************************

#include "RationalSet.h"

//*********************************************************************
// Function:    Default Constructor
//
// Description: Need a default constructor in order to have a copy 
//              constructor
//
// Parameters:  none
//
// Returned:    no return value
//*********************************************************************

RationalSet::RationalSet () {
}

//*********************************************************************
// Function:    Copy Constructor
//
// Description: Copies the passed-in object to this object
//
// Parameters:  rcRationalSet - the RationalSet object to copy from
//
// Returned:    true if found, false otherwise
//*********************************************************************

RationalSet::RationalSet (const RationalSet& rcRationalSet) {
	mcRationals = rcRationalSet.mcRationals;
}

//*********************************************************************
// Function:    isIn
//
// Description: Determine if a Rational exists in the set
//
// Parameters:  rcRational - the Rational to check for
//
// Returned:    true if found, false otherwise
//*********************************************************************

bool RationalSet::isIn (const Rational& rcRational) const {
	bool bIsIn = false;

	for (Rational cRat : mcRationals) {
		if (cRat == rcRational) {
			bIsIn = true;
		}
	}

	return bIsIn;
}

//*********************************************************************
// Function:    size
//
// Description: Determines the number of items in the RationalSet
//
// Parameters:  none
//
// Returned:    the number of items in the set
//*********************************************************************

int RationalSet::size () const {
	return static_cast<int>(mcRationals.size ());
}

//*********************************************************************
// Function:    add
//
// Description: Add the given Rational to the Set. Don't allow 
//              duplicates in the set.
//
// Parameters:  rcRational - the Rational to add
//
// Returned:    true if added, false otherwise
//*********************************************************************

bool RationalSet::add (const Rational& rcRational) {
	bool bAdded = false;

	if (!isIn (rcRational)) {
		mcRationals.push_back (rcRational);
		bAdded = true;
	}

	return bAdded;
}

//*********************************************************************
// Function:    operator <<
//
// Description: Output the set to a stream, where each Rational is
//              separated by a space.
//
// Parameters:  rcStream - the output stream
//						  rcRatSet - the RationalSet to send to the output stream
//
// Returned:    The modified output stream
//*********************************************************************

ostream& operator << (ostream& rcStream, const RationalSet& rcRatSet) {

	return rcStream;
}

//*********************************************************************
// Function:    operator >>
//
// Description: Read in the set from a stream, where each Rational is
//              separated by a space.
//
// Parameters:  rcStream - the input stream
//						  rcRatSet - the RationalSet to read into
//
// Returned:    the modified input stream
//*********************************************************************

istream& operator >> (istream& rcStream, RationalSet& rcRatSet) {

	return rcStream;
}

//*********************************************************************
// Function:    operator +
//
// Description: Adds a Rational to the set and returns it as a new set.
//						  The calling RationalSet is not modified.
//
// Parameters:  rcRational - the Rational to add to the set
//
// Returned:    The set that is the calling RationalSet 
//							plus the rcRational
//*********************************************************************

RationalSet RationalSet::operator + (const Rational& rcRational) {
	RationalSet cNewSet;

	return cNewSet;
}

//*********************************************************************
// Function:    operator ==
//
// Description: Compares the calling RationalSet to the passed in 
//					    RationalSet
//
// Parameters:  rcRationalSet - the RationalSet to compare
//
// Returned:    true if the sets are equal, otherwise false
//*********************************************************************

bool RationalSet::operator == (const RationalSet& rcRationalSet) const {
	bool bIsEqual = true;



	return bIsEqual;
}