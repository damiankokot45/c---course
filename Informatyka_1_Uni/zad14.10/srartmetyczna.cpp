#include <iostream>

int main() {
    double x;
    double y;
    int u;
    int v;
    double sredniaxy;
    double sredniauv;
    
    std::cout<<"Podaj x: ";
    std::cin>>x;
    std::cout<<"Podaj y: ";
    std::cin>>y;
    std::cout<<"Podaj u: ";
    std::cin>>u;
    std::cout<<"Podaj v: ";
    std::cin>>v;


    sredniaxy=(x+y)/2;
    std::cout<<"srednia arytmetyczna x i y: "<<sredniaxy<<std::endl;
    sredniauv=(u+v)/2.0;// Konwersja na double.
    std::cout<<"srednia arytmetyczna u i v: "<<sredniauv<<std::endl;

    return 0;
}
