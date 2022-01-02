#include <iostream>
using namespace std;

void rotateby_one(int a[], int *n, int d) {
    int temp[d],i;
    for(i=0;i<d;i++) {
        temp[i]=a[i];
    }
    for(i=0;i<*n-d;i++) {
        a[i]=a[i+d];
    }
    for(i=0;i<d;i++) {
        a[*n-d+i]=temp[i];
    }
}

void rotateby_d(int a[], int n, int d) {
    int i;
    d%=n;
    rotateby_one(a,&n,d);
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
