#include<iostream>

// Deklaracja funkcji zamieniającej liczbę na jej kod binarny w tablicy
void liczbaNaBinarny(int a, int tab[], int &n);

int main() {
    const int rozmiarTablicy = 10;
    int tablica[rozmiarTablicy];
    int liczba, iloscWypelnionych = 0;

    // Wczytanie liczby od użytkownika
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> liczba;

    // Wywołanie funkcji liczbaNaBinarny
    liczbaNaBinarny(liczba, tablica, iloscWypelnionych);

    // Wyświetlenie wyniku
    std::cout << "Kod binarny liczby " << liczba << " to: ";
    for (int i = 0; i < iloscWypelnionych; ++i) {
        std::cout << tablica[i];
    }

    return 0;
}

// Definicja funkcji liczbaNaBinarny
void liczbaNaBinarny(int a, int tab[], int &n) {
    while (a > 0) {
        tab[n++] = a % 2;
        a /= 2;
    }
}
