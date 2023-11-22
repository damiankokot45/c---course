//Napisz program wyświetlający liczby z przedziału <a,b> w porządku rosnącym i malejącym.
//Wartości a i b podaje użytkownik.
//np. dla a=1 i b=5 lub a=5 i b=1
//1 2 3 4 5 5 4 3 2 1

#include <iostream>
 
int main()
{
    int a,b;
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
 
    if (a>b){
        std::swap(a,b);
    }
    for(int i=a;i<=b;i++)
    {
        std::cout << i << " ";
    }
    for(int i=b;i>=a;i--)
    {
        std::cout << i << " ";
    }
        
 
    return 0;
}