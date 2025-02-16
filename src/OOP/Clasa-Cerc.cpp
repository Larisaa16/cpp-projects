#include <iostream>
#define PI 3.14159
using namespace std;

class Cerc {
    double raza;

public:
    Cerc() : raza(0.0) {}

     Cerc(double r): raza(r){}

    Cerc(const Cerc& c) {
        raza=c.raza;
    }

    ~Cerc() {}

    double getRaza() const {return raza;}

    void setRaza(double r) {raza=r;}

    double Circumferinta() const {
        return 2 * PI * raza;
    }

    double aria() const;

};

double Cerc::aria() const {
    return PI*raza*raza;
}

int main() {
    Cerc cerc1(10.0);
    Cerc cerc2=20.0;
    Cerc cerc3{30.0};
    Cerc cerc4={40.0};

    cout<<cerc1.Circumferinta()<<endl;
    cout<<cerc2.Circumferinta()<<endl;
    cout<<cerc3.Circumferinta()<<endl;
    cout<<cerc4.Circumferinta()<<endl;

    cerc1.setRaza(5.0);
    cout<<"Raza cercului e: "<<cerc1.getRaza()<<endl;

    return 0;
}