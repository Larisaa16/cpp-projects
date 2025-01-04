#include <cmath>
#include <iostream>

using namespace std;

bool primeNumber(int n) {
   if (n<2) return false;
   for (int i=2;i<=sqrt(n);i++) {
      if (n%i==0)
         return false;
   }
   return true;
}

int nrInvers(int n) {
    int invers=0;
    while (n>0) {
        invers=invers*10+n%10;
        n=n/10;
    }
    return invers;
}

int main() {

    for (int i=100;i<=999;i++) {
        if (primeNumber(i)) {
            int invers=nrInvers(i);
            if (primeNumber(invers))
                cout<<i<<" ";
        }
    }
    return 0;
}