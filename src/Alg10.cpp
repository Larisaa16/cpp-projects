#include <iostream>

using namespace std;

int main() {
    int number,S=1; // 1 is divisor
    cout<<"Enter a number: "; cin>>number;

   for (int i=2;i<=number/2;i++) {
       if (number%i==0) {
           S+=i;
       }
   }

    if (S < number)
        cout << "The number is deficient.";
    else if (S > number)
        cout << "The number is abundant.";
    else
        cout << "The number is perfect.";

    return 0;
}