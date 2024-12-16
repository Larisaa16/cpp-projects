#include <iostream>
//Enunţul problemei: Să se determine un algoritm pentru însumarea a două numere de forma ab+c
using namespace std;

int main() {
    int a,b,c;
    int e,f,g;

    cout<<"Dati primul nr din primul nr: "; cin>>a;
    cout<<"Dati al doilea nr din primul nr: ";     cin>>b;
    cout<<"Dati al doilea nr: ";    cin>>c;

    g=(b+c)%10;
    f=(a+(b+c)/10)%10;
    e=(a+(b+c)/10)/10;
    cout<<e<<f<<g;
}