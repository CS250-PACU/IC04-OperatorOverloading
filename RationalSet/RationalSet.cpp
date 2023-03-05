//*********************************************************************
// File name:  RationalSet.cpp
// Author:     CS, Pacific University
// Date:       2/13/23
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Implementation for class RationalSet. Set of Rational 
//						 numbers is of the form {}, {1/2}, {1/2 2/3}, ...
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
RationalSet::RationalSet() {

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
RationalSet::RationalSet(const RationalSet& rcRationalSet) {
	mcRationals = rcRationalSet.mcRationals;
}

//*********************************************************************
// Function:    isIn
//
// Description: Determine if a Rational exists in the Set
//
// Parameters:  rcRational - the Rational to check for
//
// Returned:    true if found, false otherwise
//*********************************************************************
bool RationalSet::isIn(const Rational& rcRational) const {
	bool bIsIn = false;

	return bIsIn;
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
bool RationalSet::add(const Rational& rcRational) {
	bool bAdded = false;

	if (!isIn (rcRational)) {
		mcRationals.push_back (rcRational);
		bAdded = true;
	}

	return bAdded;
}