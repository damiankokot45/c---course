//Napisz program sumujący wartości ciągu n liczb podawanych przez użytkownika. 
//Ilość liczb podaje użytkownik jako pierwszą wartość.

#include <iostream>
 
int main()
{
    int n,suma=0,liczba;
    std::cout << "Podaj n: ";
    std::cin >> n;
 
    for(int i=1; i<=n; i++)
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;
        suma+=liczba;
    }
    std::cout << "suma= " << suma;
 
    return 0;
}