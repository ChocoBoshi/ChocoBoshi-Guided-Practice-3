/*
Fraction.h
Guided Practice 3 - Mastering Operator Overloading- Fractions Revisited
Timothy Herzog
6/23/24
*/

#ifndef FRACTION
#define FRACTION
#include<string>

class Fraction {
private:
	int num; //numerator 
	int den; // denominator

public:
	void setFraction(int n, int d);
	Fraction add(const Fraction& f);
	Fraction sub(const Fraction& f);
	Fraction mult(const Fraction& f);
	Fraction div(const Fraction& f);

	//Accessor Functions

	int getNum() const;
	int getDen() const; 

	void printFraction();

	//Constructors
	Fraction();
	Fraction(int n, int d);
	Fraction(std::string frac);

	//Operator Overloads
	Fraction operator + (const Fraction& f);
	Fraction operator - (const Fraction& f);
	Fraction &operator = (const Fraction& f);
	Fraction operator * (const Fraction& f);
	Fraction operator / (const Fraction& f);

};

#endif