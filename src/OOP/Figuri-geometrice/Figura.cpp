#include "Figura.h"
#include <iostream>

Figura::Figura():lat(nullptr),nrLat(0){}
Figura::Figura(int nr) {
    nrLat = nr;
    lat=new Latura[nrLat];
}
Figura::Figura(Latura* lat, int nrLat) {
    this->nrLat=nrLat;
    this->lat=new Latura[nrLat];
    for(int i=0;i<nrLat;i++) {
        this->lat[i]=lat[i];
    }
}

Figura::~Figura() {
    delete[] lat;
}

ostream& operator<<(ostream& out, const Figura& f) {
    out<<"Figura are laturile: ";
    for (int i=0;i<f.nrLat;i++) {
        out<<f.lat[i].getL()<<" ";
    } out<<"\n";
    return out;
}

int Figura::Perimetru() const {
    int suma=0;
    for(int i=0;i<nrLat;i++) {
        suma+=lat[i].getL();
}
    return suma;
}
