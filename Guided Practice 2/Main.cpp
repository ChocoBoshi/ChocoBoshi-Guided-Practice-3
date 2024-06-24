/*
Main.cpp
Guided Practice 2 - Constructors - Fractions Revisited
Timothy Herzog
6/23/24
*/

#include<iostream>
#include "Fraction.h"

using namespace std;

int main() {
	Fraction f1, f2, f3, f4(2, 16), f5("1/2");

	f1.setFraction(2, 17);
	f2.setFraction(1, 8);

	cout << "Adding 2/17 to 1/8" << endl;
	f3 = f1.add(f2);
	f3.printFraction();

	f1.setFraction(1, 2);
	f2.setFraction(3, 8);

	cout << "Subtracting 1/2 from 3/8" << endl;
	f3 = f1.sub(f2);
	f3.printFraction();


	f1.setFraction(1, 2);
	f2.setFraction(1, 4);

	cout << "Dividing 1/2 by 1/4" << endl;
	f3 = f1.div(f2);
	f3.printFraction();


	f1.setFraction(2, 4);
	f2.setFraction(1, 3);

	cout << "Multiplying 2/4 by 1/3" << endl;
	f3 = f1.mult(f2);
	f3.printFraction();

	f4.printFraction();

	f5.printFraction();

	return 0;

}