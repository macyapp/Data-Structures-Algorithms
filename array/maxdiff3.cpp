#include <iostream>
using namespace std;

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

void maxdiff(int a[], int n) {
    int i,j,max,minVal,p,q;
    minVal=a[0];
    q=0;
    max=a[1]-a[0];
    for(i=1;i<n-1;i++) {
        if(a[i]-minVal>max) {
            max=a[i]-minVal;
            p=i;
        }
        if(a[i]<minVal) {
            minVal=a[i];
            q=i;
        }
    }
    cout<<"Max difference: "<<a[p]<<" - "<<a[q]<<" = "<<max<<'\n';
}

int main() {
    int ar[]={4,3,2,6,10,8,1},d;
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array:\n";
    printarray(ar,size);
    maxdiff(ar, size);
    //cout<<"Array after rotation:\n";
    //printarray(ar,size);
    return 0;
}
