#include <iostream>
#include <vector>

using namespace std;

void minMax(vector<int>& A, int& max, int& min) {
    int n=A.size();
    min=max=A[0];

    if (n==0) {
        cout<<"the array is emplty";
        return;
    }

    for (int i=1;i<n;i++) {
        if (A[i]>max)
            max=A[i];

        else
            if (A[i]<min)
                min=A[i];
    }
}


int main() {
    vector<int> A ={3, 1, 9, 54, 16, 2, 34, 20};
    int max, min;

    minMax(A,max, min);
    cout<<"max is: "<<max<<endl;
    cout<<"min is: "<<min;

    return 0;
}