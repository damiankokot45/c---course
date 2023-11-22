//Napisz program obliczający wartości funkcji liniowej ax+b, dla kolejnych x z przedziału <xp,xk>. 
//Wartości a, b, xp, xk podaje użytkownik.

#include <iostream>

int main()
{
    int a,b,xp,xk;
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
    std::cout << "Podaj xp: ";
    std::cin >> xp;
    std::cout << "Podaj xk: ";
    std::cin >> xk;
 
    for(int i=xp; i<=xk; i++)
    {
        std::cout << a <<"*"<< i <<"+"<< b <<"="<< a*i+b <<"\n";
    }
 
    return 0;
}