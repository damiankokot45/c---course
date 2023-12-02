#include <iostream>

int main(){

    int tab[5]{2,4,-1,8,0};
    int max=tab[0];

    for (int i = 0; i < 5; i++)
    {
        if (max<tab[i])
        {
            max=tab[i];
        }
        
    }
    
    std::cout<<max<<std::endl;

}