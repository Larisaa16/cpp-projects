#include <iostream>
//numbers between 100 and 599 that they have the digits in arranged order and the sum of the digits equals 18
using namespace std;

int main() {
    for (int a=100;a<=599;a++) {
        int unit=a%10;
        int zeci=(a%100)/10;
        int sute=a/100;

        int S=0;
        S=unit+zeci+sute;
        if (sute < zeci && zeci < unit) {
            if (S==18) {
                cout<<a<<" ";
            }
        }
    }
}