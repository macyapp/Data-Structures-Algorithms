#include <iostream>
using namespace std;

void largest(int a[], int n) {
    int x,i,idx;
    x=a[0];
    for(i=0;i<n;i++) {
        if(a[i]>x) {
            x=a[i];
            idx=i;
        }
    }
    cout<<"Largest element "<<x<<" is present at "<<idx+1<<'\n';
}

int main() {
    int ar[]={10,5,20,8};
    int size=sizeof(ar)/sizeof(ar[0]);
    largest(ar,size);
    return 0;
}
