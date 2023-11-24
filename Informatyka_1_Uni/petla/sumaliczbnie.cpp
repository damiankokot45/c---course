//Napisz program obliczający sumę liczb nieparzystych z przedziału <x,y>. Wartości x i y podaje użytkownik. 

#include <iostream>
 
int main()
{
    int x,y,suma=0;
    std::cout << "Podaj x: ";
    std::cin >> x;
    std::cout << "Podaj y: ";
    std::cin >> y;
 
    for(x;x<=y;x++)
    {
        if(x%2==1)
            suma+=x;
    }
    std::cout <<"wynik= "<< suma;
 
    return 0;
}