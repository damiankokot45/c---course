#include <iostream>

int main(){

    int tab[50];
    int suma=0;

    for (int i = 0; i < 50; i++)
    {
        tab[i]=2*i;
        suma=suma+tab[i];
    }

    std::cout<<suma<<std::endl;
    
}