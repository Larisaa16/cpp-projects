#include<iostream>
#include "Latura.h"
#include "Figura.h"
#include "Patrat.h"
#include "Triunghi.h"

int main() {
    int nrLaturi=4;
    cout<<"Nr de laturi: "; cin>>nrLaturi;
    auto* laturi=new Latura(nrLaturi);
    for (int i=0;i<nrLaturi;i++) {
        cin>>laturi[i];
    }

    Figura fig(laturi,nrLaturi);
    cout<<fig;

    Triunghi t;
    cout<<t.arie();

    Patrat p;
    cout<<p.arie();

    delete[] laturi;

    return 0;
}