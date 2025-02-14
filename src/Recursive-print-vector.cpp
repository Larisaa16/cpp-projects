#include <iostream>
#include <vector>

using namespace std;

void afisare(const vector<int>& n, int i){

    if(i>=n.size())
        return;

    cout<<n[i]<<" ";
    afisare(n,i+1);
}

int main()
{
    vector<int> n={4, 2, 16, 20};
    afisare(n,0);
    return 0;
}