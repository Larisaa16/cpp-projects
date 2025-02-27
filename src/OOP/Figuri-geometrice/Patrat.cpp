#include "Figura.h"
#include "Patrat.h"
#include <cmath>

Patrat::Patrat():Figura(1) {
    std::cout<<"Introduceti lungimea laturii: ";
    std:: cin>>lat[0];
}

double Patrat::arie() {
    int l=lat[0].getL();
    return l*l;
}
