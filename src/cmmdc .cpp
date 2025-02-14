#include <iostream>

using namespace std;


int cmmdc(int a, int b) {
    if(b==0)
        return a;
    else
        return (b,a%b);
}
int main()
{
    int x[5],n;
    cout<<"Dati numarul de intregi pozitivi: ";
    cin>>n;
    cout<<"Dati cele n elemente intregi pozitivi: ";

    for(int i=0; i<n; i++) {
        cin>>x[i];
    }
    for(int i=1; i<n; i++) {
        x[0]= cmmdc(x[0],x[i]);
    }
    cout<<x[0];
    return 0;
}