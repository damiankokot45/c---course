#include <iostream>

int main() {
    double a;
    double b;
    double obwod;
    double pole;
    
    std::cout<<"Podaj bok a: ";
    std::cin>>a;
    std::cout<<"Podaj bok b: ";
    std::cin>>b;

    obwod=2*(a+b);
    pole=a*b;
    std::cout<<"Obwod wynosi: "<<obwod<<std::endl;
    std::cout<<"Pole wynosi: "<<pole<<std::endl;

    return 0;
}
