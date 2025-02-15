#include <iostream>
#include <string.h>

using namespace std;

class Produs {
private:
    char* nume;
    double pret{};
    int stoc{};

public:
    //Constructor implicit
    Produs() : nume(nullptr), pret(0.0), stoc(0) {}

    //Constructor cu un parametru
    explicit Produs(const char* n): pret(0.0), stoc(0) {
        nume=new char[strlen(n)+1];
        strcpy(nume,n);
    }

    //Constructor cu 3 parametrii
     Produs(char* n,double p ,int s) {
        nume=new char[strlen(n)+1];
        strcpy(nume,n);
        pret=p;
        stoc=s;
    }

    //Destructor
    ~Produs() {delete[] nume;}

    //Metode
    double valoare_stoc(){return pret*stoc;}

    double getPret() const{return pret;}

    void setPret (double p) {pret=p;}

    void actualizare_stoc(int s) {stoc=s;}

    void afisare_detalii() const {
        if (pret==0 || stoc==0 || nume==nullptr)
        {cout<<"datele nu au fost definite"<<endl;}
        else {
            cout<<"Produsul "<<nume<<" are urm caracteristici: "<<endl;
            cout<<" -pret: "<<pret<<endl;
            cout<<" -stoc: "<<stoc<<endl;
        }
    }
};

int main() {
    Produs p1;
    Produs p2("Laptop");
    Produs p3("Telefon",1000,100);

    p2.afisare_detalii();
    p3.afisare_detalii();


    p1.setPret(1200);
    p1.afisare_detalii();

    cout<<p2.valoare_stoc();

    return 0;
}