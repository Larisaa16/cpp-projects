#include <iostream>

using namespace std;

int main() {
    int a,b,k;
    cout<<"a,b,k: "; cin>>a>>b>>k;
if (b%k==0) {
    cout<<"a/b divided by "<<k<<" is: "<<a/k<<"/"<<b/k;
}else
    cout<<"it cannot divide";
return 0;
}
