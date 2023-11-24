#include <iostream>
 
int main()
{
    int n=0;
    int x=0;
    int y=0;
    std::cout<<"Podaj x: ";
    std::cin>>x;
    std::cout<<"Podaj y: ";
    std::cin>>y;
    std::cout << "Podaj n: ";
    std::cin >> n;

    int potega=n;
    if (n >= x && n <= y)
    {
    for(int i=2; i<=n; i++)
        {
            std::cout << potega << " ";
            potega*=i;
        }
    }
    else
    {
        std::cout<<"n nie miesci sie w przedziale"<<std::endl;
    }
    
 
    return 0;
}