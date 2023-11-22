//Napisz program wypisujący liczby całkowite parzyste od liczby podanej przez użytkownika aż do 0.

#include <iostream>
 
int main()
{
    int liczba;
    std::cout << "Podaj liczba: ";
    std::cin >> liczba;
 
    do
    {
        if (liczba%2==0)
            std::cout << liczba << " ";
        liczba--;
    }
    while(liczba>=0);
 
    return 0;
}