#include <iostream>
//Determine whether a natural number n is perfect
using namespace std;

int main() {
    int a,S=1;
    cout<<"enter the number: "; cin>>a;
    for (int i=2;i<=a/2;i++)
        if (a%i==0)
            S+=i;

    if (S==a) {
        cout<<"The number is a perfect num";
    } else
        cout<<"The number is not a perf num";

   return 0;
}