#include <iostream>

int main() {
    int u;
    int v;
    
    std::cout<<"Podaj liczbę u: ";
    std::cin>>u;
    std::cout<<"Podaj liczbę v: ";
    std::cin>>v;
    int iloscMiejsc =v/u;
    int resztaDzielenia=v%u;
    double wynikDzielenia=(v*1.0)/u;

    std::cout<<"Liczba"<<u<<"mieści się2 w"<<v<<"="<<iloscMiejsc<<std::endl;
    std::cout<<"Reszta dzielenia"<<v<<"przez"<<u<<"wynosi:"<<resztaDzielenia<<std::endl;
    std::cout<<"Wynik dzielenia"<<v<<"/"<<u<<"to:"<<wynikDzielenia<<std::endl;

    return 0;
}
