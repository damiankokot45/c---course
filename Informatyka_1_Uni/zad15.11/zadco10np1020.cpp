#include <iostream>
//co 10 liczba np 10,20,30... n
int main(){

    int n=0;
    int wynik=0;

    std::cout<<"Podaj liczbe"<<std::endl;
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        wynik=wynik+n;    
        std::cout<<wynik<<std::endl;
    }
}