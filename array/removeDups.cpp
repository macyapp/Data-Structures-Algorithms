#include <iostream>
using namespace std;

void remDups(int a[], int *n) {
    int temp[*n],res=0,i;
    temp[0]=a[0];
    res++;
    *n=*n-1;
    for(i=1;i<*n;i++) {
        if(temp[i-1]!=a[i]) {
            temp[res]=a[i];
            res++;
            *n=*n-1;
        }
    }
    for(i=0;i<*n;i++) {
        a[i]=temp[i];
    }
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
