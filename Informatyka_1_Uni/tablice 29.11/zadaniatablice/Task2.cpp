#include <iostream>

int main(){

    int tab[3]={2,2,5};
    int sum;
    sum=tab[0]+tab[1];
    sum+=tab[2];
    std::cout<<sum;
}