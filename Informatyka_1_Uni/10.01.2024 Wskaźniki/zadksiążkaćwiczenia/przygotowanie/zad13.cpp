//(*,r,!) Napisz funkcję o dwóch argumentach:
//— wskaźnik na funkcję o jednym argumencie typu int zwracającą
//wartość typu double,
//— wartość typu int,
//która zwraca wartość funkcji otrzymanej w pierwszym argumencie na
//liczbie całkowitej podanej w drugim argumencie.

#include <iostream>

double dwaargumenty(double(*liczba)(int liczba1), int a){
    return liczba(a);
}


// Przykładowa funkcja, którą można przekazać do dwaargumenty
double przykladowaFunkcja(int x) {
    return x * 2.5;
}

int main() {
    // Przykładowe użycie funkcji dwaargumenty
    int argument = 7;
    double wynik = dwaargumenty(przykladowaFunkcja, argument);

    std::cout << "Wynik: " << wynik << std::endl;

    return 0;
}



