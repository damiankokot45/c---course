//(r) Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch zmiennych typu int, 
//która zwraca jako wartość wskaźnik na zmienną przechowującą mniejszą z liczb wskazywanych przez argumenty.

#include <iostream>

int* min(int*a,int*b){
    if (*a<*b)
    {
        return a;
    }
    else{
        return b;
    }
    
}

int main() {
  int a = 102;
  int b = 20;

  int* wynik = min(&a, &b);

  std::cout<<"Mniejsza liczna: "<<*wynik;

  return 0;
}

