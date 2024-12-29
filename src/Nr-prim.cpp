#include <iostream>
//if n is a prime number
using namespace std;

/*int Prime(int n) {
    if (n<=1)
        return 0;

    for (int i=2;i*i<=n;i++)
        if (n%i==0)
            return 0;
    return 1;

}*/

bool Prime(const int n) {
    if (n <= 1)
        return false;
    if (n==2)
        return true;
    for (int i=3;i*i<=n;i++)
        if (n%i==0)
            return false;
    return true;
}

int main() {
    int n;
    cout<<"Enter the number: "; cin>>n;
    if (Prime(n)) {
        cout<<"The number is prime"<<endl;
    }
    else
        cout<<"The number is not prime"<<endl;
    return 0;
}