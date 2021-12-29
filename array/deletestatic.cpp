#include<iostream>
using namespace std;

void deletei(int a[], int *n, int x) {
    int i,j;
    for(i=0;i<*n;i++) {
        if(a[i]==x)
            break;
    }

    if(i==*n) {
        cout<<"Element not present\n";
        exit(0);
    }
    
    for(j=i;j<*n-1;j++) {
        a[i]=a[i+1];
    }
    *n=*n-1;
}

void print(int a[],int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int arr[]={5,7,10,20,40},cap,size,x,pos;
    cap=sizeof(arr)/sizeof(arr[0]);
    x=10;
    cout<<"Array before:\n";
    print(arr,cap);
    deletei(arr,&cap,x);
    cout<<"Array after:\n";
    print(arr,cap);
    return 0;
}