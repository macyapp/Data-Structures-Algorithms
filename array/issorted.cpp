#include <iostream>
using namespace std;

bool sorted(int a[], int n) {
    int i;
    for(i=1;i<n;i++) {
        if(a[i]<a[i-1])
            return false;
    }
    return true;
}

int main() {
    int ar[]={2,5,12,30,35};
    int size=sizeof(ar)/sizeof(ar[0]);
    if(sorted(ar,size))
        cout<<"Array is sorted.\n";
    else
        cout<<"Array is not sorted.\n";
    return 0;
}
