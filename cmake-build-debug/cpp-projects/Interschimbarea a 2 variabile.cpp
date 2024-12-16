#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout<<"Enter the numbers a and b: "; cin>>a>>b;
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<"a: "<<a<<endl<<"b: "<<b;
}
