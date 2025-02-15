#include <iostream>

using namespace std;

class Fractie {
private:
    int numarator;
    int numitor;


    int cmmdc(int a,int b) {
        if (b==0) return a;
        else return cmmdc(b,a%b);
    }
public:
    Fractie(): numarator(0), numitor(1) {}
    Fractie(int nr, int num) {
        this->numarator=nr;
        this->numitor=num;
    }

    int getNumarator() const {return numarator;}
    int getNumitor() const {return numitor;}

    void setNumarator(int n){numarator=n;}
    void setNumitor(int n){numitor=n;}

    void simplificare() {
        int f=cmmdc(numarator,numitor);
        numarator/=f;
        numitor/=f;
    }

    Fractie adunare(Fractie &f) const {
        int nr=numarator*f.numitor+f.numarator*numitor;;
        int num=numitor*f.numitor;

        Fractie fractie(nr,num);
        fractie.simplificare();

        return fractie;
    }

    void afisare() const {
        cout<<numarator<<"/"<<numitor<<endl;
    }

   double valoare_fractie() const {
        return static_cast<double>(numarator)/numitor;
    }


};

int main() {
    Fractie f1(1,3);
    Fractie f2(1,5);
    Fractie f_a=f1.adunare(f2);

    cout << "Rezultatul adunarii fractiei f1 cu fractia f2 este: ";
    f_a.afisare();
    cout << "Valoarea zecimala a fractiei "; f_a.afisare(); cout<< " este " <<f_a.valoare_fractie();


    return 0;
}