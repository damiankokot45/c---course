//Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
//zmiennych typu int, która zwraca jako wartość mniejszą z liczb wskazywanych przez argumenty.

#include <iostream>

int min(int* a, int* b) {
  if (*a < *b) {
    return *a;
  } else {
    return *b;
  }
}

int main() {
  int a = 10;
  int b = 20;

  int min_value = min(&a, &b); // Dereference a and b before passing them to min()

  std::cout << "Mniejsza wartosc: " << min_value << std::endl;

  return 0;
}

