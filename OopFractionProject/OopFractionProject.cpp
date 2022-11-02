// OopFractionProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f(3, 5);
    Fraction f1(4, 7);

    std::cout << "Our fraction is: " << f << "\n";

    int n, m;
    std::cin >> n >> f >> m;
    std::cout << n << " " << f << " " << m << "\n";



    //Fraction f2;
    // f.Plus(f1);

    

}
