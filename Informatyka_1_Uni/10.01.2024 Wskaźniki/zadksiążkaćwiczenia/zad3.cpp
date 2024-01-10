#include <iostream>

int main(){
    int tab[100]{};

    for (int i = 0; i < 100; i++)
    {
        tab[i]=i+1;
    }

    for (int i = 0; i < 100; i++)
    {
        std::cout<<tab[i]<<" ";
    }
    
    
}