#include <iostream>
#include <cmath>

int main() {
    double R;
    double pierwiastek;
    double logarytm;
    double pi;

    std::cout << "Podaj R ";
    std::cin >> R;

    pierwiastek=sqrt(R);
    logarytm=-7*log(R);
    pi =  3.14159265358979323846*R;

    std::cout<<"Pierwiastek: "<< pierwiastek<<std::endl;
    std::cout<<"Log: "<<logarytm<<std::endl;
    std::cout<<"R * PI: "<< pi << std::endl;

    return 0;
}
