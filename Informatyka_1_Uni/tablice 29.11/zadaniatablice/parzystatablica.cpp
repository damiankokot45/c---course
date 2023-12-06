#include <iostream>

int main(){
int tablica[5] = {3, 6, 9, 4, 8};
int rozmiarTablicy = 5;
for (int i = 0; i < rozmiarTablicy; i++) {
if (tablica[i] % 2 == 0) {
std::cout << tablica[i] << std::endl;
}
}
}