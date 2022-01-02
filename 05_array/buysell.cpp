#include <iostream>
using namespace std;

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

void maxprofit(int a[], int n) {
    int i,max=0;
    for(i=0;i<n-1;i++) {
        if(a[i+1]>a[i]) {
            max+=a[i+1]-a[i];
        }
    }
    cout<<"Max profit: "<<max<<'\n';
}

int main() {
    int ar[]={3,1,4,8,7,2,5};
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array:\n";
    printarray(ar,size);
    maxprofit(ar, size);
    //cout<<"Array after rotation:\n";
    //printarray(ar,size);
    return 0;
}
