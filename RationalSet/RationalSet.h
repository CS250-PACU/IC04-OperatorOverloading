#pragma once
//*********************************************************************
// File name:  RationalSet.h
// Author:     CS, Pacific University
// Date:       3/4/23
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Definition for class RationalSet. 
//*********************************************************************

#include "Rational.h"
#include <iostream>
#include <vector>

using namespace std;

class RationalSet {
	public:
	RationalSet ();
	RationalSet (const RationalSet& rcRationalSet);

	bool isIn (const Rational& rcRational) const;
	int size () const;
	bool add (const Rational& rcRational);

	RationalSet operator + (const Rational& rcRational);
	bool operator == (const RationalSet& rcRationalSet) const;

	friend ostream& operator << (ostream& rcStream,
		const RationalSet& rcRatSet);
	friend istream& operator >> (istream& rcStream,
		RationalSet& rcRatSet);

	private:
	vector<Rational> mcRationals;
};