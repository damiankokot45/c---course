//Napisz program wyświetlający kolejne potęgi liczby 3, aż do uzyskania wartości większej od k. 
//Wartość k to liczba naturalna większa od 2, którą podaje użytkownik. 
#include <iostream>

int main()
{
    int k,x=1;
    std::cout << "Podaj k: ";
    std::cin >> k;
    if (k<=2)
        return 0;
 
    do
    {
        x*=3;
        std::cout << x << " ";
    }
    while(x<=k);
 
    return 0;
}