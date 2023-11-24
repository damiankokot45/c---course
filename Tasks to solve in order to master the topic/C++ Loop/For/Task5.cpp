#include <iostream>

int main(){
    int x=0;
    int y=0;
    std::cout<<"x="<<std::endl;
    std::cin>>x;
    std::cout<<"y="<<std::endl;
    std::cin>>y;

    for (int i = x; i < y+1; i++)
    {
        std::cout<<i<<" ";
    }
    
}