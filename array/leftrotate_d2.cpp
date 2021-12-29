#include <iostream>
using namespace std;

void reverse(int a[], int l, int h) {
    int temp;
    for(;l<h;l++,h--) {
        temp=a[l];
        a[l]=a[h];
        a[h]=temp;
    }

}

void rotateby_d(int a[], int n, int d) {
    int i;
    d%=n;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int ar[]={15,7,8,9,0,3},d;
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array before rotation:\n";
    printarray(ar,size);
    cout<<"Enter rotation d value:\n";
    cin>>d;
    rotateby_d(ar,size,d);
    cout<<"Array after rotation:\n";
    printarray(ar,size);
    return 0;
}
