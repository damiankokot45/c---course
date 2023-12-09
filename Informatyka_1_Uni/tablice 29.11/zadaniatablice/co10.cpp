#include <iostream>

int main() {
    const int rozmiar = 11; // 11 elementów od 0 do 100 z krokiem 10
    int tablica[rozmiar];

    // Wypełnianie tablicy liczbami od 0 do 100 z krokiem 10
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = i * 10;
    }

    // Wyświetlanie zawartości tablicy
    std::cout << "Tablica liczb od 0 do 100 co 10:\n";
    for (int i = 0; i < rozmiar; ++i) {
        std::cout << tablica[i] << " ";
    }

    return 0;
}
