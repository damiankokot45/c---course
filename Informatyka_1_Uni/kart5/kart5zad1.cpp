#include <iostream>

int min(int* a, int* b) {
  if (*a>*b) {
    int przechowaj;
    przechowaj=*a;
    *a=*b;
    *b=przechowaj;
    return *a;
  } else {
    std::cout<<"a jest mniejsze od b";
  }
}

int main() {
  int a = 100;
  int b = 20;

  std::cout << "Przed a="<<a<<" b="<<b<<std::endl;

  int wynik = min(&a,&b);
  
  std::cout<<"Sprawdzenie: "<<wynik<<std::endl;

  std::cout<<"Po a="<<a<<" b="<<b<<std::endl;

  return 0;
}

