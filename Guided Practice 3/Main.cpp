/*
Main.cpp
Guided Practice 3 - Mastering Operator Overloading- Fractions Revisited
Timothy Herzog
6/23/24
*/

#include<iostream>
#include "Fraction.h"

using namespace std;

int main() {
	Fraction f1(2,8), f2(1, 2), f3, f4, f5, f6, f7;

	f3 = f1;

	f4 = f1 + f2; 

	f5 = f1 - f2; 

	f6 = f1 / f2; 

	f7 = f1 * f2;

	f3.printFraction(); 

	f4.printFraction(); 

	f5.printFraction(); 

	f6.printFraction(); 

	f7.printFraction(); 

	return 0;

}