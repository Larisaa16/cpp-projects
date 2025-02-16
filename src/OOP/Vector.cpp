#include <iostream>

using namespace std;

class Vector {
private:
    int m;
    int* data;

     Vector(int m1): m(m1), data(new int[m1]) {}

public:
    Vector():m(0), data(nullptr) {}

     static Vector citesteVector(int dim) {
      Vector v(dim);
        cout<<"Introduceti elementele: "<<endl;
        for (int i=0;i<dim;i++) {
            cin>>v.data[i];
        }
        return v;
    }

    Vector adunare(const Vector& v) {
        Vector rezultat(m);

        for (int i=0;i<m;i++) {
            rezultat.data[i]=data[i]+v.data[i];
        }
        return rezultat;
    }

    void afisare() {
        cout<<"Elementele vectorului sunt: "<<endl;
        for (int i=0;i<m;i++) {
            cout<<data[i]<<" ";
        } cout<<endl;
    }

    ~Vector() {
        delete[] data;
    }

};

int main() {
    int dim;
    cout<<"Dimensiunea vectorului este: "; cin>>dim;

    Vector v1=Vector::citesteVector(dim);
    Vector v2=Vector::citesteVector(dim);

    Vector v3=v1.adunare(v2);
    v3.afisare();

    return 0;
}