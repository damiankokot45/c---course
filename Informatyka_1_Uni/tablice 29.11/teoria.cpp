#include <iostream>

int main(){
    int liczby[6]={0,1,2,3,4,5};

    for (int i = 0; i < 6; i++)
    {
        std::cout<<liczby[i]<<" ";
    }
    
    int tab[5];
    for (int i = 0; i < 5; i++)
    {
        tab[i]-2*i;
    }
    
    for (int i = 0; i < 6; i++)
    {
        std::cout<<tab[i]<<" ";
    }
}