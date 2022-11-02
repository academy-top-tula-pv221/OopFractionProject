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

Fraction Fraction::operator-()
{
	return Fraction(-this->numerator, this->denominator);
}

Fraction Fraction::operator++()
{
	this->numerator += this->denominator;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction save(this->numerator, this->denominator);
	++(*this);
	return save;
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

Fraction operator+(const Fraction& f1, const Fraction& f2)
{
	Fraction fresult;
	fresult.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
	fresult.denominator = f1.denominator * f2.denominator;
	return fresult;
}

Fraction operator+(Fraction& f, int number)
{
	return f + Fraction(number, 1);
}

Fraction operator+(int number, Fraction& f)
{
	return f + number;
}

Fraction operator-(Fraction& f1, Fraction& f2)
{
	Fraction fresult;
	fresult.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
	fresult.denominator = f1.denominator * f2.denominator;
	return fresult;
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

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
	out << "[" << f.numerator << "/" << f.denominator << "]";
	return out;
}

std::istream& operator>>(std::istream& in, Fraction& f)
{
	in >> f.numerator;
	in >> f.denominator;
	return in;
}
