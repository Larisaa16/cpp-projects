///S = 1! + 2! + 3! + ...+ n!

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, k;
    float s=1, kfact=1;
    cout<<"n: "; cin>>n;
    for(k=2;k<=n;k++)
    {
        kfact*=k;
        s+=kfact;
    }
    cout<<"S= "<<fixed<<setprecision(0)<<s<<endl;
    return 0;
}
