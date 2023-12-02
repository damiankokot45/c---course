#include <iostream>

int main(){

    int tab[15];
    for (int i = 0; i <= 10; i++)
    {
        std::cout<<"Podaj liczbe "<<i<<" "<<std::endl;
        std::cin>>tab[i];
    }
    
    for (int j = 0; j <= 10; j++)
    {
        std::cout<<tab[j]<<" ";
    }
    
}