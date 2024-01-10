#include <iostream>

int main(){
    int a=0;
    std::cout<<"Podaj liczbe:";
    std::cin>>a;
    int* wsk_a=&a;
    

    std::cout<<wsk_a<<std::endl;
    std::cout<<*wsk_a<<std::endl;

}