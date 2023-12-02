#include <iostream>

int main(){

    int tab[5]{2,4,-1,8,0};
    int max=tab[0];

    for (int i = 5; i >=0; i--)
    {
        int temp=tab[4];
        tab[i+1]=tab[i];
        
        //tab[i-1]=tab[i];
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        std::cout<<tab[i]<<" ";
    }
    

}