#include <iostream>
#pragma once

class Fraction
{
	int numerator;
	int denominator;
public:
	//Fraction() : numerator{ 0 }, denominator{ 1 } {}
	Fraction() : Fraction(0, 1) {}

	Fraction(int numerator, int denominator) :
		numerator{ numerator }, denominator{ denominator } {}

	void SetFraction(int numerator, int denominator);
	void Print();

	void Add(Fraction fobj);
	Fraction Plus(Fraction fobj);
	//Fraction operator+(Fraction fobj);
	//Fraction operator+(int number);

	Fraction operator-();
	Fraction operator++();
	Fraction operator++(int);

	friend Fraction operator+(const Fraction& f1, const Fraction& f2);
	friend Fraction operator+(Fraction& f, int number);
	friend Fraction operator+(int number, Fraction& f);

	friend Fraction operator-(Fraction& f1, Fraction& f2);

	friend bool operator<(Fraction& f1, Fraction& f2);
	friend bool operator<(Fraction& f, int number);
	friend bool operator<(int number, Fraction& f);
	friend bool operator<(Fraction& f, double number);
	friend bool operator<(double number, Fraction& f);

	friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
	friend std::istream& operator>>(std::istream& in, Fraction& f);


	void Del(Fraction fobj);
	Fraction Minus(Fraction fobj);
};

