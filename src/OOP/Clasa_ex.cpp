//Assignment & Composition

#include <iostream>

using namespace std;


class A {
private:
    int atr;
public:
    A():atr(0) {
        cout<<"constructor implicit"<<endl;
    }
    A(const A& a) {
        atr=a.atr;cout<<"Copy constructor"<<endl;
    }

    A& operator=(const A &x) {
        cout<<"Operator= "<<endl;
        atr=x.atr;
        return *this;
    }

};

class B {
private:
    A a;
};

int main() {
    B b;
    B c(b);
    c=b;
return 0;
}