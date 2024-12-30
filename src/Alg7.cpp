#include <iostream>
//the numbers between 10-100 that has 5 and are divisible by 17
using namespace std;

int main() {

    for (int n=10;n<=99;n++) {
        int unit=n%10;
        int zeci=n/10;

        if ((unit==5 || zeci==5) && n%17==0) {
            cout<<n<<" ";
        }
    }
    return 0;
}