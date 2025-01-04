#include <iostream>
#include <cmath>
using namespace std;


bool primeNumber(int n) {
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i==0)
            return false;
    }
    return true;
}


int main() {
    int number1,number2;
    cin>>number1>>number2;

    if (primeNumber(number1)&&primeNumber(number2) && abs(number1-number2)==2) {
        cout<<"The numbers are twin primes";
    }
    else
        cout<<"The numbers aren't twin primes";

    return 0;
}