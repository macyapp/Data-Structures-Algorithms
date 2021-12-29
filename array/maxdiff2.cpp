#include <iostream>
using namespace std;

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

void maxdiff(int a[], int n) {
    int i,j,max,p,q,aux[n];
    max=a[n-1];
    for(i=n-1;i>=0;i--) {
        if(a[i]>max) {
            max=a[i];
            p=i;
        }
        aux[i]=max;
    }
    printarray(aux,n);
    max=aux[0]-a[0];
    q=0;
    for(i=0;i<n;i++) {
        if(aux[i]-a[i]>max) {
            max=aux[i]-a[i];
            q=i;
        }
    }
    cout<<"Max difference: "<<a[p]<<" - "<<a[q]<<" = "<<max<<'\n';
}

int main() {
    int ar[]={3,1,4,8,7,2,5};
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array:\n";
    printarray(ar,size);
    maxdiff(ar, size);
    //cout<<"Array after rotation:\n";
    //printarray(ar,size);
    return 0;
}
