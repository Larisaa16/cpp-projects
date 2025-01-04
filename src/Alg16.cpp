#include <iostream>
#include <cmath>
using namespace std;

//how many prime numbers are less than or equal to than n

bool primeNumber(int n) {
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i==0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin>>n;

    for (int i=1;i<=n;i++) {
        if (primeNumber(i)) {
            cout<<i<<" ";
        }
    }

    return 0;
}