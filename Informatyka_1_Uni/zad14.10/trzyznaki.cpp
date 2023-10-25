#include <iostream>
#include <algorithm>

int main() {
    char znak0;
    char znak1;
    char znak2;
    
    // Krok 1: Pobierz trzy znaki od użytkownika
    std::cout<<"Podaj znak0: "<<std::endl;
    std::cin>>znak0;
    std::cout<<"Podaj znak1: "<<std::endl;
    std::cin>>znak1;
    std::cout<<"Podaj znak2: "<<std::endl;
    std::cin>>znak2;
    
    std::cout<<znak0<<znak2<<znak1<<std::endl;
    std::cout<<znak0<<znak1<<znak2<<std::endl;
    std::cout<<znak2<<znak0<<znak1<<std::endl;

    return 0;
}
