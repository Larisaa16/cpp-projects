#include <iostream>

using namespace std;

void minMax(int A[], int n, int& Max, int& min) {
    Max = A[0];
    min = A[0];

    if (n==0) {
        cout<<"the array is emplty";
        return;
    }

    for (int i=1;i<n;i++) {
        if (A[i]>Max)
            Max=A[i];
        else
            if (A[i]<min)
            min=A[i];
    }

}

int main() {
    int A[]={3, 1, 9, 54, 16, 2, 34, 20};
    int n=sizeof(A)/sizeof(A[0]);
    int Max, min;
    minMax(A, n, Max, min);
    cout<<"Max = "<<Max<<endl;
    cout<<"Min = "<<min;

    return 0;

}