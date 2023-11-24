#include <iostream>

int main(){
    int x,y;
    
    std::cin>>x;
    std::cin>>y;

    do
    {
        std::cout<<x<<" ";
        x++;
    } while (x<=y);
    
}