#include<iostream>

int znajdzMaksymalny(const int tab[], int n) {
    int maksymalny = tab[0];

    for (int i = 1; i < n; ++i) {
        if (tab[i] > maksymalny) {
            maksymalny = tab[i];
        }
    }

    return maksymalny;
}


int main() {
    const int rozmiarTablicy = 10;
    int tablica[rozmiarTablicy];

    // Wczytanie elementów tablicy od użytkownika
    std::cout << "Podaj " << rozmiarTablicy << " liczb calkowitych do tablicy:\n";
    for (int i = 0; i < rozmiarTablicy; ++i) {
        std::cout << "Podaj element #" << i + 1 << ": ";
        std::cin >> tablica[i];
    }

    // Wywołanie funkcji znajdzMaksymalny
    int maksymalnyElement = znajdzMaksymalny(tablica, rozmiarTablicy);

    // Wyświetlenie wyniku
    std::cout << "Element maksymalny w tablicy: " << maksymalnyElement << std::endl;

    return 0;
}

