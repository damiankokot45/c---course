// (C++,r) Napisz funkcję otrzymującą jako argumenty referencje
//do dwóch zmiennych typu int, która zamienia ze sobą wartości 
//zmiennych, do których referencje dostaliśmy w argumentach.

#include <iostream>

void zamiennik(int&a, int&b){
    int przechowaj;
    przechowaj=a;
    a=b;
    b=przechowaj;
}
int main(){

int x = 5;
    int y = 10;

    std::cout << "Przed x=" << x << " y=" << y << std::endl;

    // Wywołanie funkcji zamiennik, przekazując wskaźniki do zmiennych x i y
    zamiennik(x,y);

    std::cout << "Pox= " << x << " y =" << y << std::endl;

    return 0;

}