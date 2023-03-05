# IC04-OperatorOverloading
The solution includes three working projects:
- Rational
- RationalSet
- RationalUnitTests

# Mission
Your mission is to get practice with overloading operators in both 
Rational and RationalSet.

***I want to rewrite this so that the students do one function at a 
time. I'm worried that jumping into all the functions at once is too 
much for them***

# class Rational and Rational Driver
1a.	In Rational.h and Rational.cpp overload << to output a Rational 
object in the form 1/2. Do not output a newline after outputting the 
denominator.
1b.  Test << by uncommenting line 18 in the Rational driver.
2a.	overload >> to input a Rational object in the form 1/2.
2b.  Test << by uncommenting lines 20-22 in the Rational driver.
3a.	overload * to multiply two Rational objects returning a Rational.
3b.  Test * by uncommenting lines 24-26 in the Rational driver.
object. Do not modify either Rational object being multiplied.
4a.	overload == to test whether two Rational objects are equal. In 
this case 1/2 is not equal to 2/4 
4b.  Test == by uncommenting lines 28 - 40

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