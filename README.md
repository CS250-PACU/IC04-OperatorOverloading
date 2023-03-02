# IC04-OperatorOverloading
The solution includes three working projects:
- Rational
- RationalSet
- RationalUnitTests

# Mission
Your mission is to get practice with overloading operators in both Rational and
RationalSet.

*** I want to rewrite this so that the students do one function at a time. I'm 
worried that jumping into all three is too much for them ***'

# class Rational
1.	overload << to output a Rational object in the form 1/2.
2.	overload >> to input a Rational object in the form 1/2.
3.	overload * to multiply two Rational objects returning a Rational object. 
Do not modify either Rational object being multiplied.
4.	overload == to test whether two Rational objects are equal. In this case 1/2 
is not equal to 2/4 ***(Doug added this in 2022)***

# Rational Driver
Implement each function and uncomment the driver code.

# class RationalSet
1.	overload << to output a RationalSet object in the form {1/2 2/3 3/4}.
2.	overload + to add a Rational object to a RationalSet. Do not allow 
duplicates. ***(Doug added this in 2022)***
3.	overload == to test whether two RationalSet objects are equal.  ***(Doug 
added this in 2022)*** 
4.	overload >> to input a RationalSet object in the form {1/2 2/3 3/4}. 
This is the hardest function to write. Further, an acceptable set like the 
one shown can have no trailing space after { or a preceding space in front of }. 
This makes the input easier.
5. overload * to return the intersection of two RationalSet objects. Do not 
modify either RationalSet object.  ***(Doug removed this in 2022)***

# RationalSet Driver
Implement each function and uncomment the driver code.
