#pragma once
//*********************************************************************
// File name:  RationalSet.h
// Author:     CS, Pacific University
// Date:       2/13/23
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Definition for class RationalSet. A set of Rational
//             numbers is of the form {}, {1/2}, {1/2 2/3}, ...
//*********************************************************************

#include "Rational.h"
#include <iostream>
#include <vector>

using namespace std;

class RationalSet {
public:
	RationalSet();
	RationalSet(const RationalSet& rcRationalSet);

	bool isIn(const Rational& rcRational) const;
	int size() const;
	//bool add(const Rational& rcRational);

private:
	vector<Rational> mcRationals;
};