#include "Latura.h"
#include <iostream>

Latura::Latura():lungime(0) {}
Latura::Latura(int l):lungime(l) {}

int Latura::getL() const{return lungime;}

Latura& Latura::operator=(const Latura& l) {
    if (this!=&l) {
        lungime=l.lungime;
    }
    return *this;
}

istream& operator>>(istream& in, Latura& l) {
    cout<<"Lungimea laturii este: ";
    in>>l.lungime;
    return in;
}

ostream& operator<<(ostream& out, const Latura& l) {
    out<<"Latura are lungimea: "<<l.lungime;
    return out;
}

