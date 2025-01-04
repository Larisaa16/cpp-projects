#include <iostream>
#include <cmath>
using namespace std;

//an algorithm to determine the first 10 primes of the form 4k-1, k natural number


bool primeNumber(int n) {
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i==0)
            return false;
    }
    return true;
}

 int main() {

    int found=0;
    int k=1;

    while (found<10) {
        int num=4*k-1;
        if (primeNumber(num)) {
            cout<<num<<endl;
            found++;
        }
        k++;
    }

    return 0;
}