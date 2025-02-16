#include <iostream>

using namespace std;

class Fraction {
private:
    int numarator;
    int numitor;

public:
    Fraction(int numarator, int numitor) : numarator(numarator), numitor(numitor) {}

    //Static method for the sum of 2 fractions
    static void sum(const Fraction& f1, const Fraction& f2){
        int numaratorSuma=f1.numarator*f2.numitor+f2.numarator*f1.numitor;
        int numitorSuma=f1.numitor*f2.numitor;

        cout<<"Suma fractiilor: "<<numaratorSuma<<"/"<<numitorSuma<<endl;
    }


};

int main() {
    Fraction f1(1,2);
    Fraction f2(1,3);

    Fraction::sum(f1,f2);
}