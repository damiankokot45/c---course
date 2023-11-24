#include <iostream>
 
int main()
{
    int suma=0;
    int zapis=0;
    int liczba1=0;
    int liczba2=0;
 
    do
    {
        std::cout<<"Podaj liczbe1: ";
        std::cin>>liczba1;
        std::cout<<"Podaj liczbe2: ";
        std::cin>>liczba2;
        suma=suma+liczba1+liczba2;
    }
    while(liczba1!=liczba2);
 
    std::cout<<"suma= "<<std::endl;
    std::cout<<suma;
 
    return 0;
}