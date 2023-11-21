#include <iostream>

int main(){
    int x=10;
    goto etykieta1;
    if(x>0 && x<10){
        std::cout<<"Tak"<<std::endl;
    }
    else{
        std::cout<<"Nie"<<std::endl;
    }

    if(x>0 || x<10){
        std::cout<<"Tak1"<<std::endl;
    }
    else{
        std::cout<<"Nie1"<<std::endl;
    }

    etykieta1:
    std::cout<<"pomin";

    //jak dziala funkcja rand
    //
}