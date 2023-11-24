//Napisz program, który wypisze wszystkie 
//kwadraty liczb naturalnych mniejsze od liczby podanej przez użytkownika.

#include <iostream>
 
int main()
{
    int liczba=0;
    int x=1;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
 
    do
    {
        std::cout << x*x << " ";
        x++;
    }
    while(x*x<liczba);
 
    return 0;
}