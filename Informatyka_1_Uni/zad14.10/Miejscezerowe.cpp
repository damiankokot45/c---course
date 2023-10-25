#include <iostream>

int main() {
    double a;
    double b;
    
    // Krok 1: pobrac a i b od uzytkownika
    std::cout<<"Podaj a: ";
    std::cin>>a;
    std::cout<<"Podaj b: ";
    std::cin>>b;

    // Krok 2: miejsce zerowe
    if (a!=0){
        double x=-b/a;
        std::cout<<"Miejsce zerowe to x = "<<x<<std::endl;
        } 
        else {
        std::cout<<"Prosta nie ma miejsca zerowego, ponieważ a = 0."<<std::endl;
    }

    return 0;
}
