#include <iostream>

using namespace std;

class Fractie {

private:
    int numarator, numitor;

    friend int cmmdc(int a,int b);
public:


    Fractie(): numarator(0),numitor(1) {}
    Fractie(int m, int n): numarator(m),numitor(n) {}
    Fractie(const Fractie& f) {
        numarator=f.numarator;
        numitor=f.numitor;
    }

    void print() const {
        cout<<numarator<<"/"<<numitor<<endl;
    }

    Fractie operator+(Fractie& f) const {
        int m=f.numarator*numitor+numarator*f.numitor;
        int n=f.numitor*numitor;

        Fractie rezultat(m,n);
        simplificare(rezultat);
        return rezultat;
    }

    friend void simplificare(Fractie& f);

    friend ostream& operator<<(ostream& out, Fractie& f) {
        out<<f.numarator<<"/"<<f.numitor<<endl;
        return out;
    }

    friend istream& operator>>(istream& in, Fractie& f) {
        cout<<"Numaratorul este: ";
        in>>f.numarator;
        cout<<"Numitorul este: ";
        in>>f.numitor;

        return in;
    }

    Fractie& operator=(const Fractie& f) {
        if (this != &f) {
            this->numarator = f.numarator;
            this->numitor = f.numitor;
        }
        return *this;
    }


    Fractie &operator++() {
        numarator+=numitor;
        return *this;
    }

    Fractie operator++(int) {
        Fractie temp(*this);
        numarator+=numitor;

        return temp;
    }

};

int cmmdc(int a,int b) {
    if (b==0) {
        return a;
    }else
        return cmmdc(b,a%b);
}

void simplificare(Fractie& f) {
    int d=cmmdc(f.numarator, f.numitor);
    f.numarator/=d;
    f.numitor/=d;
}

int main() {
    Fractie f1(1,2);
    Fractie f2(1,5);

    Fractie add;
    add=f1+f2;
    cout<<add;

   Fractie f3;
    cin>>f3;
    cout<<f3;

    Fractie f4(10,20);
    Fractie f5(13,27);

    f4=f5;
    cout<<f4;
    cout<<f1;

    return 0;
}