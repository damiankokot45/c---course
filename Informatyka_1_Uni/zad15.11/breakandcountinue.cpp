#include <iostream>

int main(){
    for (int i = 0; i < 10; i++)
    {

            if (i==4)
            {
                break;
                
            }
            std::cout<<i<<std::endl;

            

    }
    for (int i = 0; i < 10; i++)
    {

            if (i%2==1)//wypisanie parzystych liczb
            {
                continue;
                
            }
            std::cout<<i<<std::endl;

            

    }
    
}