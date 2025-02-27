#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n,m;
    string s[]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(i<10){
            cout<<s[i-1]<<endl;
        }

        else if(i>9&& i%2==0){
            cout<<"even"<<endl;;
        }
        else {
            cout<<"odd";
        }

    }

    return 0;
}
