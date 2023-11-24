//Napisz program pobierający od użytkownika liczbę dodatnią. 
//Jeżeli użytkownik wprowadzi zero lub ujemną program poprosi o podanie nowej liczby. 
//Prośba może być ponawiana wielokrotnie. Program kończy się w momencie podania wartości większej od zera.

#include <iostream>

int main()
{
    int liczba;
 
    do
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;
    }
    while(liczba<=0);
 
    return 0;
}