#include <iostream>

int main(){
    int liczba=0;
    std::cout<<"Podaj liczbe"<<std::endl;
    std::cin>>liczba;
    /*for (int i = 0; i < liczba+1; i++)
    {
        std::cout<<i<<std::endl;
    }
    */
    int i=0;
    do
    {
        std::cout<<i<<std::endl;
        i++;
    } while (i<liczba+1);
    
    while (i<liczba+1)
    {
        std::cout<<i<<std::endl;
        i++;
    }
    
}