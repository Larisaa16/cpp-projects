#include <iostream>

using namespace std;

class Fractie {
private:
    int numarator, numitor;


public:
    void afiseaza() {
    cout << numarator << "/" << numitor << endl;
    }

    Fractie(int a=0, int b=1) {
        if(b<0) {
            a=-a,b=-b;
        }
        numarator=a,numitor=b;

    }

    Fractie& operator=(const Fractie& F) {
        this->numarator=F.numarator;
        this->numitor=F.numitor;
        return *this;
    }

    Fractie& operator=(const int& n) {
        this->numarator=n;
        this->numitor=1;
        return *this;
    }

    Fractie& operator +=(const Fractie& F) {
        int a=numarator*F.numitor+numitor*F.numarator;
        int b=numitor*F.numitor;
        this->numarator=a;
        this->numitor=b;
        return *this;
    }

    Fractie& operator+=(const int& n) {
        int a=numarator*1+numitor*n;
        int b=numitor*1;
        this->numarator=a;
        this->numitor=b;
        return *this;
    }
};

int main() {
    Fractie X(1,4),Y(2,3);
    X+=Y;
    X.afiseaza();

    X=Fractie(1,4);
    X.afiseaza();

    X+=2;
    X.afiseaza();

    X = Fractie(1 , 4) , Y = Fractie(2 , 3);
    swap(X,Y);
    X.afiseaza();
    Y.afiseaza();

    X=Fractie(1,4),Y=Fractie(2 ,3);
    X=(Y+=1);
    X.afiseaza();

    return 0;
}