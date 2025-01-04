#include <iostream>

using namespace std;

int divisors(int num) {
    int s=1;

    for (int i=2;i<=num/2;i++)
        if (num%i==0) {
            s+=i;
        }

    return s;
}

int main() {
int number1,number2;
    cout<<"Please enter two numbers: "; cin>>number1>>number2;

    int S1 = divisors(number1);
    int S2 = divisors(number2);

    if (S1==number2 && S2==number1)
        cout<<"The numbers are friend numbers";
    else
        cout<<"The numbers are not friend numbers";

    return 0;
}
