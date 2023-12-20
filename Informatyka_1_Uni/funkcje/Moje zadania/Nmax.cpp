#include<iostream>

// Deklaracja funkcji znajdującej maksimum z dwóch liczb całkowitych
int znajdzMaximum(int a, int b) {
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main() {
    const int iloscLiczb = 10;
    int liczby[iloscLiczb];

    // Wczytanie 10 liczb od użytkownika
    std::cout << "Podaj 10 liczb calkowitych:\n";
    for (int i = 0; i < iloscLiczb; ++i) {
        std::cout << "Podaj liczbe #" << i + 1 << ": ";
        std::cin >> liczby[i];
    }

    // Znalezienie największej liczby
    int najwieksza = liczby[0];
    for (int i = 1; i < iloscLiczb; ++i) {
        najwieksza = znajdzMaximum(najwieksza, liczby[i]);
    }

    // Wyświetlenie wyniku
    std::cout << "Najwieksza z podanych liczb to: " << najwieksza << std::endl;

    return 0;
}
