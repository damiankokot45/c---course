//Program losuje liczbę z zakresu od 1 do 100. Zadaniem gracza jest odgadnięcie tej liczby. 
//Jeżeli użytkownik poda za dużą liczbę program wyświetli komunikat „Szukana wartość jest mniejsza”. 
//Jeżeli poda za małą liczbę program wyświetli „Szukana wartość jest większa”. 
//Po odgadnięciu liczby gracz dowiaduje się po ilu próbach udało mu się zakończyć grę.

#include <iostream>
#include <cstdlib>
#include <ctime>
 
int main() {
    srand(time(NULL));
     
    int wylosowana = rand()%100+1;
    int twoja_liczba = 0;
    int proby = 0;
     
    while (true)
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> twoja_liczba;
        proby++;
         
        if (twoja_liczba==wylosowana)
            break;
         
        if (wylosowana<twoja_liczba)
            std::cout << "Szukana wartosc jest mniejsza\n";
        else
            std::cout << "Szukana wartosc jest wieksza\n";
    }   
     
    std::cout << "\nGRATULACJE!!! WYGRALES!!!\n";
    std::cout << "Liczba prob wynosi " << proby;
     
    return 0;
}