#include <iostream>

using namespace std;

int main() {

    int n;
    long long s=0;
    cin>>n;

    if (n < 1) {
        cout << "n>1." << endl;
        return 1;
    }

    for (int i=1;i<n;i++) {
        s+=i*(i+2);
    }
    cout<<"the sum is: "<<s<<endl;
    return 0;
}
