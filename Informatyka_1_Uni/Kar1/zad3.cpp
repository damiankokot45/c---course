#include <iostream>

int main() {
    int liczba;
    int wynik;
    int wynik1;
    std::cin>>liczba;
    wynik=liczba%10;
    std::cout<<wynik<<std::endl;
    wynik=liczba%100/10;
    std::cout<<wynik<<std::endl;
    wynik=liczba%1000/100;
    std::cout<<wynik;


}
