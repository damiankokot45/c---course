//Napisz program obliczający x do potęgi y. Wartości x i y to liczby całkowite większe od 0.

#include <iostream>
 
int main()
{
    int x,y,wynik=1;
    std::cout << "Podaj x: ";
    std::cin >> x;
    std::cout << "Podaj y: ";
    std::cin >> y;
    if (x<=0 || y<=0)
        return 0;
 
    for (int i=1;i<=y;i++)
    {
        wynik*=x;
    }
    std::cout << "wynik= " << wynik;
 
    return 0;
}