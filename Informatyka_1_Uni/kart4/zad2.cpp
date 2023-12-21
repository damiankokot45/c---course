#include <iostream>

double srednia(int tab[][4],int n) {
    int a0=1;
    int a1=1;
    int a2=1;
    int suma=0;
    
    for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 4; ++j) {
        suma=suma+tab[i][j];
    }
}
    
    }

    //sprawdzenie
    std::cout<<"Ilosc liczb"<<ileliczb<<::std::endl;
    std::cout<<"Suma:"<<suma<<::std::endl;

    //jezeli tablica pusta
    if (ileliczb > 0) {
        return suma/ileliczb;
    } else {
        std::cout<<"Tablica jest pusta."<<std::endl;
        return 0;
    }
}

int main() {
    const int n = 3;
    int tablica[n][4] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}
    };

    double wynik=srednia(tablica,n);
    std::cout<<"srednia wynosi:"<<wynik<<std::endl;
}
