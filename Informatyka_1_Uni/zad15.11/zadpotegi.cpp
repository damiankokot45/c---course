#include <iostream>

int main(){
    int liczba=0;
    int dopotegi=0;
    int iloczyn=1;
    std::cout<<"Podaj liczbe "<<std::endl;
    std::cin>>liczba;
    std::cout<<"Podaj do ktorej potegi "<<std::endl;
    std::cin>>dopotegi;
    for (int i = 0; i < dopotegi; i++)
    {
        iloczyn=iloczyn*liczba;

    }
    std::cout<<"Wynik: "<<iloczyn<<std::endl;
}