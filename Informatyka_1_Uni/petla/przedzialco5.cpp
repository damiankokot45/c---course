//Napisz program wyświetlający liczby całkowite (co 5) z przedziału <5,10,15,20 … 100>

#include <iostream>

int main()
{
    for(int i=5;i<=100;i=i+5)
        std::cout << i << " ";
 
    return 0;
}