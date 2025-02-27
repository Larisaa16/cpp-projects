
#include "Triunghi.h"
#include <iostream>
#include <cmath>

Triunghi::Triunghi():Figura(3){
        std::cout<<"Introduceti lungimea celor 3 laturi: ";
    for (int i=0;i<3;i++) {
        int lungime;
        std::cin>>lungime;
        lat[i]=Latura(lungime);
    }
}

double Triunghi::arie() {
       double p=Perimetru()/2;
        return sqrt(p*(p-lat[0].getL())*(p-lat[1].getL())*(p-lat[2].getL()));
}
