#include <iostream>

int main() {
    const int rozmiar = 3; // Możesz dostosować rozmiar tablicy według potrzeb

    // Inicjalizacja pierwszej tablicy dwuwymiarowej
    int tablica1[rozmiar][rozmiar] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Inicjalizacja drugiej tablicy dwuwymiarowej
    int tablica2[rozmiar][rozmiar] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Inicjalizacja tablicy wynikowej, która przechowa sumę obu tablic
    int wynik[rozmiar][rozmiar];

    // Dodawanie odpowiadających sobie elementów obu tablic
    for (int i = 0; i < rozmiar; ++i) {
        for (int j = 0; j < rozmiar; ++j) {
            wynik[i][j] = tablica1[i][j] + tablica2[i][j];
        }
    }

    // Wyświetlenie tablicy wynikowej
    std::cout << "Tablica wynikowa po dodaniu:\n";
    for (int i = 0; i < rozmiar; ++i) {
        for (int j = 0; j < rozmiar; ++j) {
            std::cout << wynik[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
