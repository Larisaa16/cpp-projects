#include <iostream>

using namespace std;

class Vector {
private:
    int m;
    static const int MAX_SIZE=100;
    int data[MAX_SIZE]{};

public:
    explicit Vector(int m1):m(m1) {
        cout<<"Introduceti elementele: "<<endl;
        for(int i=0;i<m;i++)
            cin>>data[i];
    }

    Vector():m(0) {}

    Vector adunare(Vector& v) {
        Vector rez;
        rez.m=m;
        for (int i=0;i<m;i++) {
            rez.data[i]=data[i]+v.data[i];
        }
        return rez;
    }

    void afisare() {
        cout<<"Elementele vectorului sunt: "<<endl;
        for (int i=0;i<m;i++) {
            cout<<data[i]<<" ";
        } cout<<endl;
    }
};

int main() {

}