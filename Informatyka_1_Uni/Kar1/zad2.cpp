#include <iostream>
#include <math.h>
int main() {
    long long rok;
    long long wynik;
    std::cout<<"Podaj wiek";
    std::cin>>rok;

    //long long wynik=3.156*pow(10,7);
    long long czas=31536000;
    wynik=rok*czas;
    std::cout<<wynik;
    


}
