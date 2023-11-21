#include <iostream>

int main(){
    double liczba=0;
    double suma=0;

    do
    {
        std::cin>>liczba;
        suma=suma+liczba;
    } while (liczba!=0);
    
    
    std::cout<<"Suma liczba: "<<suma<<std::endl;
    
}