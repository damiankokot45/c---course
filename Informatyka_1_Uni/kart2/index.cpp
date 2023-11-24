#include <iostream>

int main() {
    std::cout<<"Podaj liczbe n: ";
    int n;
    int k=1;
    int liczba=0;
    std::cin>>n;

    int suma=0;

    for(int i=1; i<=n; i++)
        {
            
            liczba=k*k*k;
            k++;
            suma=suma+liczba;
            
            std::cout << liczba << " ";
        }
        std::cout<<" "<<std::endl;
        std::cout <<"wynik " <<suma << " ";

    return 0;
}