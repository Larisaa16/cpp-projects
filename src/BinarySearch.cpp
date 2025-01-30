#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int low, int high, int x) {
    while (low<=high) {
        int mid=low+(high-low)/2;

        if (a[mid]==x)
            return mid;
        if ((a[mid]<x))
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9};
    int x=8;
    int n=sizeof(a)/sizeof(a[0]);
    int result = binarySearch(a, 0, n - 1, x);
    if(result == -1) cout << "Element is not present in array";
    else
        cout<<"Exists in array at index: "<<result<<endl;

    return 0;
}