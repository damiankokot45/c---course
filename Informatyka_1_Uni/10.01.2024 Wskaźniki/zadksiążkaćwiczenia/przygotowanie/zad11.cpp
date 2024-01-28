//(r,róż) Napisz funkcję, która dostaje jako argument dodatnią liczbę
//całkowitą n, rezerwuje w pamięci blok n zmiennych typu int i zwraca
//jako wartość wskaźnik do początku zarezerwowanego bloku pamięci

#include <iostream>

int*rezerwacja(unsigned int n){
    return new int[n];

}


int main() {
    // Przykład użycia funkcji rezerwacja
    unsigned int rozmiar = 5;
    int* tablica = rezerwacja(rozmiar);

    // Sprawdzenie, czy alokacja pamięci się powiodła
    if (tablica != nullptr) {
        // Przykład użycia zaalokowanej pamięci
        for (unsigned int i = 0; i < rozmiar; ++i) {
            tablica[i] = i * 10;
            std::cout << "tablica[" << i << "] = " << tablica[i] << std::endl;
        }

        // Zwolnienie zaalokowanej pamięci
        delete[] tablica;
    } else {
        std::cerr << "Błąd alokacji pamięci." << std::endl;
    }

    return 0;
}