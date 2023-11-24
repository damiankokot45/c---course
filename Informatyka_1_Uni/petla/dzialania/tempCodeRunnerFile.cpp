#include <iostream>
 
int main()
{
    int l,suma=0,ile=0;
 
    do
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> l;
        suma+=l;
        ile++;
    }
    while(l!=0);
 
    std::cout << "srednia= " << (float)suma/--ile;
 
    return 0;
}