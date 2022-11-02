// OopFractionProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f(3, 5);
    Fraction f1(4, 7);

    f.Print(); 
    std::cout << "\n";

    Fraction f2 = f + f1; // f.Plus(f1);

    /*f.Add(f1);
    f.Print();
    std::cout << "\n";*/

    //Fraction f3 = f.Add(f1);
    

}
