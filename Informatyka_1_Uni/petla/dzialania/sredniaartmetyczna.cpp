//Napisz program obliczający średnią arytmetyczną z ciągu liczb całkowitych podawanych przez użytkownika,
//zakończonych liczbą 0. Liczby 0 nie bierz pod uwagę w średniej.

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