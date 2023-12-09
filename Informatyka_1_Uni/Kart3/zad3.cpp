#include <iostream>

int main(){

    int tab2D[5][3]{{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
    double srednia;
    double suma;

    for (int w = 0; w < 5; w++)
    {
        suma=tab2D[w][0]+tab2D[w][1]+tab2D[w][2];
        srednia=suma/3.0;
        suma=0;
        std::cout<<"suma "<<w+1<<": "<<srednia<<std::endl;
    }
    
}