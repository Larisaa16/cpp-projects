#include <iostream>

using namespace std;

class Produs {
protected:
    char* nume;
    int pret;
    char cod[20];
};

class Electrocasnic : public Produs {
protected:
    int durata_garantie;
};

class Aliment : public Produs {
    protected:
    int dara_expirare;
};
