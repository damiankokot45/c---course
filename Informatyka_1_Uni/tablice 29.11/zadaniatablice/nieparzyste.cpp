#include <iostream>

int main() {
    const int rozmiar = 11; // Liczby nieparzyste od 0 do 100 z krokiem 10
    int tablica[rozmiar];

    // Wypełnianie tablicy liczbami nieparzystymi od 0 do 100 z krokiem 10
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = i * 20 + 10; // Wzór na generowanie nieparzystych liczb co 10
    }

    // Wyświetlanie zawartości tablicy
    std::cout << "Tablica nieparzystych liczb od 0 do 100 co 10:\n";
    for (int i = 0; i < rozmiar; ++i) {
        std::cout << tablica[i] << " ";
    }

    return 0;
}
