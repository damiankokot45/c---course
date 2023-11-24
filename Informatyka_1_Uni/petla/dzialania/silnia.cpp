//Napisz program obliczający silnię z liczby podanej przez użytkownika.

#include <iostream>
 
int main()
{
    int liczba,wynik=1;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
 
    for(int i=1; i<=liczba; i++)
    {
        wynik*=i;
    }
    std::cout << "silnia= " << wynik;
 
    return 0;
}