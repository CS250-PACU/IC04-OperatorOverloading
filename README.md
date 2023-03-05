# IC04-OperatorOverloading
The solution includes the following projects that build:
- Rational
- RationalSet
- RationalUnitTests

# Mission
Your mission is to get complete all of the functions that 
fail the unit tests.

**Please complete one step at a time**

# RationalUnitTests
Build and run the project RationalUnitTests. The project should build
and run, but most of the tests will fail. Your goal is to complete the
missing code from the functions in Rational.cpp so that all the unit
tests pass. You can complete the functions in any order you like, or 
use the recommended order below.

# class Rational
1. Complete the code for operator *. Run the unit tests to make sure
they pass.
2. Complete the code for operator ==. Run the unit tests to make sure
they pass.
3. Complete the code for operator <<. Run the unit tests to make sure
they pass.
3. Complete the code for operator >>. Run the unit tests to make sure
they pass.

# Rational Driver
Uncomment the code in Rational driver. If all the unit tests pass, then
the code will run correctly. Verify this before moving to the next 
step.

# class RationalSet and RationalSet Driver
1a.	In RationalSet.h and RationalSet.cpp overload << to output a 
RationalSet object in the form { 1/2 2/3 3/4 }. Do not output a newline
after the }
1b. Test << by uncommenting lines 47 - 53 and lines 26 - 28
2a.	overload + to add a Rational object to a RationalSet. Do not allow 
duplicates. You can utilize the add() function if you like.
2b.  Test + by uncommenting lines 30 - 32
3a.	overload == to test whether two RationalSet objects are equal. You can
edit and use the function isIn if you like
3b. Test == by uncommenting lines 34 - 40 and lines 55 - 64
4a.	overload >> to input a RationalSet object where each Rational is 
separated by a whitespace, such as 1/2 2/3 3/4. 
4b. Test >> by uncommenting line 42 and lines 66 - 77
5a. [OPTIONAL] overload * to return the intersection of two RationalSet objects. Do not 
modify either RationalSet object.
5b. [OPTIONAL] Test operator * by adding necessary code to the driver