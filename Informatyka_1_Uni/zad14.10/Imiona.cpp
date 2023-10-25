#include <iostream>
#include <string>

int main() {
    std::string imie;
    std::string nazwisko;
    char inicjalImienia;
    char inicjalNazwiska;
    int dlugoscImienia;
    char ostatniaLiteraNazwiska;
    
    std::cout<<"Podaj imie: ";
    std::cin>>imie;
    std::cout<<"Podaj nazwisko: ";
    std::cin>>nazwisko;

    inicjalImienia=imie[0];
    inicjalNazwiska=nazwisko[0];
    dlugoscImienia=imie.length();
    ostatniaLiteraNazwiska=nazwisko[nazwisko.length()-1];

    std::cout<<"Inicjaly: "<<inicjalImienia<<" "<< inicjalNazwiska<<std::endl;
    std::cout<<"Dlugosc imienia: "<<dlugoscImienia<<std::endl;
    std::cout<<"Ostatnia litera nazwiska: "<<ostatniaLiteraNazwiska<<std::endl;
    return 0;
}
