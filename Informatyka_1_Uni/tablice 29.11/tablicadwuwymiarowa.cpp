#include <iostream>

int main(){

    int tab2D[][3]{{1,2,3},{4,5,6}};

    //jak sie odwołać do 4?

    std::cout<<tab2D[0][1]<<std::endl;

    for (int w = 0; w < 2; w++)
    {
        for (int k = 0; k < 3; k++)
        {
            std::cout<<tab2D[w][k];
        }
        std::cout<<std::endl;
        
    }
    
}