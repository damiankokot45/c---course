#include <iostream>

void zwieksz(int a){
    a=a+2;
    std::cout<<"W funkcji a: "<<a<<std::endl;
}

void zwiekszwskaznik(int* wsk_a){
    *wsk_a=*wsk_a+2;
    std::cout<<"W funkcji a: "<<wsk_a<<std::endl;
}

int main(){

    int a=11;

    //PAMIETAJ ABY OKREŚLIĆ TYP DANYCH
    int* wsk_a=&a; // pobran1ie adresu zmiennej a
    // int* określenie wskaźnika // nazwa wskaznika

    //std::cout<<wsk_a<<std::endl; //wyświetlić adres wskaźnika POZYCJE?
    //std::cout<<*wsk_a; //Gwiazdka z przodu określa aby pobrać WARTOŚĆ ZMIENNEJ MIESZCZĄCEJ SIĘ POD ADRESEM

    zwieksz(a);
    zwiekszwskaznik(wsk_a);
    std::cout<<a;
    std::cout<<std::endl;
    std::cout<<*wsk_a;


}