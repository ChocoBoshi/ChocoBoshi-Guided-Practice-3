/*
Fraction.cpp
Guided Practice 3 - Mastering Operator Overloading- Fractions Revisited
Timothy Herzog
6/23/24
*/

#include<iostream>
#include"Fraction.h"

using namespace std;

//Default Fraction
Fraction::Fraction() {
	this->setFraction(1, 1);
}

//Overloaded Contructors
Fraction::Fraction(int n, int d) {
	this->setFraction(n, d);
}

Fraction::Fraction(string frac) {
	std::size_t slashPos = frac.find('/');
	int num1 = std::stoi(frac.substr(0, slashPos));
	int num2 = std::stoi(frac.substr(slashPos + 1));
	this->setFraction(num1, num2);
}

void Fraction::setFraction(int n, int d) {
	this->num = n;
	this->den = d;
}

Fraction Fraction::add(const Fraction& f) {
	Fraction tmp;
	tmp.num = (this->num * f.den) + (f.num * this->den);
	tmp.den = (f.den * this->den);
	return tmp;
}

Fraction Fraction::sub(const Fraction& f) {
	Fraction tmp;
	tmp.num = (this->num * f.den) - (f.num * this->den);
	tmp.den = (f.den * this->den);
	return tmp;
}

Fraction Fraction::mult(const Fraction& f) {
	Fraction tmp;
	tmp.num = (this->num * f.num);
	tmp.den = (this->den * f.den);
	return tmp;
}

Fraction Fraction::div(const Fraction& f) {
	Fraction tmp;
	tmp.num = (this->num * f.den);
	tmp.den = (this->den * f.num);
	return tmp;
}

void Fraction::printFraction() {
	cout << this->getNum() << "/" << this->getDen() << endl;

}

//Operator Overloads

Fraction  Fraction::operator+(const Fraction& f) {
	return this->add(f);
}

Fraction& Fraction::operator=(const Fraction& f) { 
	this->setFraction(f.getNum(), f.getDen());
	return *this;
}

Fraction  Fraction::operator-(const Fraction& f) {
	return this->sub(f);
}

Fraction  Fraction::operator*(const Fraction& f) {
	return this->mult(f);
}

Fraction  Fraction::operator/(const Fraction& f) {
	return this->div(f);
}

int Fraction::getNum() const {
	return this->num;
}

int Fraction::getDen() const {
	return this->den;
}