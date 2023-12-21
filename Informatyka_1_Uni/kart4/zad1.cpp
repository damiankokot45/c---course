#include <iostream>

double srednia(int tab[][4],int n) {
    double suma=0;
    int ileliczb=0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            suma=suma+tab[i][j];
            ileliczb++;
        }
    }

    //sprawdzenie
    std::cout<<"Ilosc liczb"<<ileliczb<<::std::endl;
    std::cout<<"Suma:"<<suma<<::std::endl;

    //sprawdzenie czy tablica pusta
    if (ileliczb > 0) 
    {
        return suma/ileliczb;
    } 
    else 
    {
        std::cout<<"Tablica jest pusta."<<std::endl;
        return 0;
    }
}

int main() {
    const int n = 3;
    int tablica[n][4] = {
        {2, 2, 6, 10},
        {2, 2, 6, 10},
        {2, 2, 6, 10}
    };

    double wynik=srednia(tablica,n);
    std::cout<<"srednia wynosi:"<<wynik<<std::endl;
}
