#include <iostream>
using namespace std;

void rotatebyone(int a[], int *n) {
    int temp,i;
    temp=a[0];
    for(i=0;i<*n-1;i++) {
        a[i]=a[i+1];
    }
    a[*n-1]=temp;
}

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int ar[]={15,7,8,9,0,3};
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array before rotation:\n";
    printarray(ar,size);
    rotatebyone(ar, &size);
    cout<<"Array after rotation:\n";
    printarray(ar,size);
    return 0;
}
