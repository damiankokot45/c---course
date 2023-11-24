//Napisz program wyświetlający n kolejnych potęg liczby 2.
//wartość n podaje użytkownik, musi to być liczba naturalna większa od 0.

#include <iostream>
 
int main()
{
    int n,potega=2;
    std::cout << "Podaj n: ";
    std::cin >> n;
 
    for(int i=1; i<=n; i++)
    {
        std::cout << potega << " ";
        potega*=2;
    }
 
    return 0;
}