#include <iostream>

int main() {

    int tab[61];
    
    for (int i=0; i<=60; ++i) {
        tab[i]=i;
        std::cout<<tab[i]<<" ";
    }

    //zamiana
    std::cout<<""<<std::endl;
    int temp=0; 
    for (int i=0, j=60;i<j;++i,--j) { //i idzie od 0 do 60, a j od 60 do 1
        temp=tab[i];
        tab[i]=tab[j];
        tab[j]=temp;
    }

    std::cout<<""<<std::endl;

    for (int i=0;i<61;++i) {
        std::cout<<tab[i]<< " ";
    }

    return 0;
}
