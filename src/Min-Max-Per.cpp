#include <iostream>
#include <vector>

using namespace std;

void minMaxPer(const vector<int>& A, int& max, int& min) {
    int n=A.size();
    max=min=A[n-1];

    for (int i=0;i<n/2;i++) {
        if (A[2*i]>A[2*i+1]) {
            if (A[2*i]>max)
                max=A[2*i];
            if (A[2*i+1<min])
                min=A[2*i+1];
        }
        else
            if (A[2*i+1]>A[2*i]) {
                if (A[2*i+1]>max)
                    max=A[2*i+1];
                if (A[2*i]<min)
                    min=A[2*i];
            }
    }
}

int main() {
    vector<int> A={13, 5, 20, 11, 2, 19, 6};
    int max, min;

    minMaxPer(A, max, min);
    cout<<"max is: "<<max<<endl;
    cout<<"min is: "<<min;

    return 0;
}