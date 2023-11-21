#include <iostream>

int main(){
    int n=0;
    int wynik=0;
    int silnia=1;
    std::cout<<"Podaj n"<<std::endl;
    std::cin>>n;
    for (int i = 2; i <= n; i++)
    {
        silnia=silnia*i;
        std::cout<<"Wynik: "<<silnia<<std::endl;
    }
    
}