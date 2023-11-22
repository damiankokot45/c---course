//Napisz program wyświetlający wszystkie liczby z przedziału od 100 do 200 podzielne przez dowolną liczbę p, 
//którą podaje użytkownik. 
//Przekształć program tak, aby przedział liczb również podawał użytkownik.

//cz. 1
#include <iostream>
 
int main()
{
    int p;
    std::cout << "Podaj p: ";
    std::cin >> p;
 
    for(int i=100;i<=200;i++)
    {
        if(i%p==0)
        {
         std::cout << i << " ";
        }
    }
 
    return 0;
}
 
//cz. 2
#include <iostream>
 
int main()
{
    int p,x,y;
    std::cout << "Podaj p: ";
    std::cin >> p;
    std::cout << "Podaj x: ";
    std::cin >> x;
    std::cout << "Podaj y: ";
    std::cin >> y;
 
    for(x;x<=y;x++)
    {
        if(x%p==0)
        {
          std::cout << x << " ";  
        } 
    }
 
    return 0;
}