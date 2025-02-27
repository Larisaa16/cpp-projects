#ifndef FIGURA_H
#define FIGURA_H


#include "Latura.h"


class Figura {
protected:
    Latura* lat;
    int nrLat;
public:
    Figura();
    Figura(int);
    Figura(Latura*, int);
    ~Figura();

    friend ostream& operator<<(ostream& , const Figura&);
    int Perimetru() const;
};


#endif //FIGURA_H
