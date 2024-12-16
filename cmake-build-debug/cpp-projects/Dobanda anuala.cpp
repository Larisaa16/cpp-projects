/* : Să se descrie un algoritm pentru determinarea valorii unui depozit bancar
(cu termen la 1 an şi cu capitalizarea dobânzii) după 2 ani, ştiind valoarea iniţială şi dobânda
anuală */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int v = 0, v1, dob;
    cout<<"Dati valoarea: ";
    cin>>v;
    cout<<"Dati dobanda: ";
    cin>>dob;

    v=v+v*dob/100;
    v1=v+v*dob/100;
    cout<<"Valoarea depozitului dupa 2 ani este: "<<fixed<<setprecision(2)<<v1<<" lei";

    return 0;
}