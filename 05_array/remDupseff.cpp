#include <iostream>
using namespace std;

void remDups(int a[], int *n) {
    int res=1,i;
    for(i=1;i<*n;i++) {
        if(a[res]!=a[i]) {
            res++;
            a[res]=a[i];
        }
    }
    *n=res+1;
}

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int ar[]={10,20,20,30,30,30};
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array with duplicates:\n";
    printarray(ar,size);
    remDups(ar,&size);
    cout<<"Array without duplicates:\n";
    printarray(ar,size);
    return 0;
}
