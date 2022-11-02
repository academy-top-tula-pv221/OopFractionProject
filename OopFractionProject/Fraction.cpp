#include "Fraction.h"

void Fraction::SetFraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

void Fraction::Print()
{
	std::cout << "[" << numerator << "/" << denominator << "]";
}

void Fraction::Add(Fraction fobj)
{
	this->numerator = this->numerator * fobj.denominator + this->denominator * fobj.numerator;
	this->denominator *= fobj.denominator;
}

Fraction Fraction::Plus(Fraction fobj)
{
	Fraction fresult;
	fresult.numerator = this->numerator * fobj.denominator + this->denominator * fobj.numerator;
	fresult.denominator = this->denominator * fobj.denominator;
	return fresult;
}

//Fraction Fraction::operator+(Fraction fobj)
//{
//	Fraction fresult;
//	fresult.numerator = this->numerator * fobj.denominator + this->denominator * fobj.numerator;
//	fresult.denominator = this->denominator * fobj.denominator;
//	return fresult;
//}
//
//Fraction Fraction::operator+(int number)
//{
//	Fraction f(number, 1);
//	return *this + f;
//}



void Fraction::Del(Fraction fobj)
{
	this->numerator = this->numerator * fobj.denominator - this->denominator * fobj.numerator;
	this->denominator *= fobj.denominator;
}

Fraction Fraction::Minus(Fraction fobj)
{
	Fraction fresult;
	fresult.numerator = this->numerator * fobj.denominator - this->denominator * fobj.numerator;
	fresult.denominator = this->denominator * fobj.denominator;
	return fresult;
}

Fraction operator+(Fraction& f1, Fraction& f2)
{
	Fraction fresult;
	fresult.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
	fresult.denominator = f1.denominator * f2.denominator;
	return fresult;
}

Fraction operator+(Fraction& f, int number)
{
	Fraction f2(number, 1);
	return f + f2;
}

Fraction operator+(int number, Fraction& f)
{
	return f + number;
}

bool operator<(Fraction& f1, Fraction& f2)
{
	return f1.numerator * f2.denominator < f1.denominator * f2.numerator;
}

bool operator<(Fraction& f, int number)
{
	Fraction fn(number, 1);
	return f < fn;
}

bool operator<(int number, Fraction& f)
{
	return !(f < number);
}

bool operator<(Fraction& f, double number)
{
	return (double)f.numerator / f.denominator < number;
}

bool operator<(double number, Fraction& f)
{
	return number < (double)f.numerator / f.denominator;
}
