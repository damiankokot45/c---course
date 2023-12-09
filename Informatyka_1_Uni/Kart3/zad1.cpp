#include <iostream>

int main(){

    int tab[60];
    int tab1[60];
    int tab2[120];

    std::cout<<"Pierwsza tablica"<<std::endl;
    //pierwsza tablica 0
    for (int i=0; i<=60; ++i) {
        tab[i]=0;
        std::cout<<tab[i]<<" ";
    }

    std::cout<<""<<std::endl;
    std::cout<<"Druga tablica"<<std::endl;

    //druga tablica 1
    for (int i=0; i<=60; ++i) {
        tab1[i]=1;
        std::cout<<tab1[i]<<" ";
    }

    //polaczenie tablic
    for (int i=0, j=60;i<60, j<120;++i,++j) { //i idzie od 0 do 60, a j od 60 do 120
        tab2[i]=tab[i];
        tab2[j]=tab1[i];
    }
   
   std::cout<<""<<std::endl;
   std::cout<<"Polaczona tablica"<<std::endl;
   for (int i = 0; i < 121; i++)
   {
    std::cout<<tab2[i]<<" ";
   }
   
}