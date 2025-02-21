#include <iostream>
using namespace std;
class Complex {
private:
    double r, i;
public:
    // constructor implicit
    Complex();
    // constructor cu parametri
    Complex(double, double);
    // constructor de copiere
    Complex(const Complex&);


    // supraincarcare operator <<
    friend ostream& operator<<(ostream&, const Complex&);
    // supraincarcare operator >>
    friend istream& operator>>(istream&, Complex&);


    // supraincarcare operator +, cazul z1 + z2
    Complex operator+(const Complex&) const;
    // supraincarcare operator +, cazul z + 1
    Complex operator+(double) const;
    // supraincarcare operator +, cazul 1 + z
    friend Complex operator+(double, const Complex&);


    // supraincarcare operator =
    Complex& operator=(const Complex&);


    // supraincarcare operator ++, prefixat
    Complex& operator++();
    // supraincarcare operator ++, postfixat
    Complex operator++(int);


    // supraincarcare operator ==
    bool operator==(const Complex&) const;
};

Complex::Complex() {
    r=0;
    i=0;
}

Complex::Complex(double re, double im) {
    r=re;
    i=im;
}

Complex::Complex(const Complex& z) {
    r=z.r;
    i=z.i;
}

//Supraincarcarea opearatorilor
//operatorul <<
ostream& operator<<(ostream& out, const Complex& z) {
    out<<z.r<<" "<<z.i<<endl;
    return out;
}

//operatorul >>
istream& operator>>(istream& in, Complex& z){
    cout<<"Partea reala este: "; in>>z.r;
    cout<<"Partea imaginara este: "; in>>z.i;
    return in;
}

//operatorul +, cazul z1+z2
Complex Complex::operator+(const Complex& z) const {
    double re=r+z.r;
    double im=i+z.i;

    Complex rezultat(re, im);
    return rezultat;
}

//operatorul +, caul z+1
Complex Complex::operator+(double a) const {
    Complex resultat(r+a,i);
    return resultat;
}

// supraincarcare operator +, cazul 1 + z
Complex operator+(double a,const Complex& z) {
    return z+a;
}

// supraincarcare operator =
Complex& Complex::operator=(const Complex& z) {
    this->r=z.r;
    this->i=z.i;
    return *this;
}
// supraincarcare operator ++, prefixat
Complex& Complex::operator++() {
    r++;
    return *this;
}
// supraincarcare operator ++, postfixat
Complex Complex::operator++(int) {
    Complex temp=*this;
    r++;
    return temp;
}
// supraincarcare operator ==
bool Complex::operator==(const Complex& z) const {
    return (r==z.r)&&(i==z.i);
}



int main() {
    Complex z1(3,4), z2(1,2);
    cout<<"z1: "; cin>>z1;
    cout<<"z2: "; cin>>z2;

    Complex z3=z1+z2;
    cout<<"z1+z2= "<<z3;

    ++z1; cout << "z1 incremntat: " << z1 << endl;
    z2++; cout<<"z2 incrementat(postfixat): "<<z2<<endl;

    if (z1 == z2) {
        cout << "Z1 este egal cu Z2" << endl;
    } else {
        cout << "Z1 nu este egal cu Z2" << endl;
    }
 return 0;

}





