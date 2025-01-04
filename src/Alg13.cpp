#include <iostream>

using namespace std;

int main() {
    int m,n,p=1;
    cout<<"Enter the number: ";
    cin>>m;
    cout<<"Enter the power: ";
    cin>>n;

    for (int i=1;i<=n;i++) {
       p*=m;
    }
    cout<<p;
    return 0;
}