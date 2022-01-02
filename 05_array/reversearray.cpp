#include <iostream>
using namespace std;

void reverse(int a[], int n) {
    int l,h,temp;
    for(l=0,h=n-1;l<h;l++,h--) {
        temp=a[l];
        a[l]=a[h];
        a[h]=temp;
    }
}

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int ar[]={2,5,12,17,30,35};
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array before reverse:\n";
    printarray(ar,size);
    reverse(ar,size);
    cout<<"Array after reverse:\n";
    printarray(ar,size);
    return 0;
}
