#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& a, int low, int high) {

    int p=a[low];
    int i=low+1;
    int j=high;

    while (i<j) {
        do i++;
        while (i<=high && a[i]<=p);

        do j--;
        while (j>=low && a[j]>p);

        if (i<j) {
            swap(a[i],a[j]);
        }

    }
    swap(a[low],a[j]);
    return j;
}

void quickSort(vector<int>& a, int l, int h) {
    if (l<h) {
        int j =partition(a,l,h);
        quickSort(a,l,j-1);
        quickSort(a,j+1,h);
    }
}

void printVector(vector<int>& a) {
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> a={4, 1, 13, 6, 20, 45, 32};

    cout<<"Given vector is: "<<endl;
    printVector(a);

    quickSort(a,0,a.size()-1);

    cout<<"the sorted array is: "<<endl;
    printVector(a);
    return 0;
}