#include <iostream>

using namespace std;

class Fractie {
private:
    int numarator, numitor;
public:
    void print() const {
        cout << numarator << "/" << numitor << endl;
    }

    Fractie(int a, int b) {
        if (b<0) {
            a=-a,b=-b;
        } numarator=a,numitor=b;
    }

    Fractie& creste() {
        numarator+=numitor;
        return *this;
    }

    Fractie& creste(int n) {
        numarator+=n*numitor;
        return *this;
    }

};


int main() {
    Fractie x(1,4);
    x.print();
    x.creste();
    x.print();
    x.creste(3);
    x.print();

    return 0;
}