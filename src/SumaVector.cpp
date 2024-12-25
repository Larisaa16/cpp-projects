#include <iostream>

using namespace std;

int main() {
    int n,i;
    float v[30], S=0;

    cout<<"Enter the length of the array: "; cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for (i=0;i<n;i++) {
        cout<<"v["<<i+1<<"]=";
        cin>>v[i];
    }
    for (i=0;i<n;i++) {
        S+=v[i];
    }
    cout<<"The sum is: "<<S<<endl;

    return 0;

}