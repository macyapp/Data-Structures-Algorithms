#include<iostream>
using namespace std;

void insert(int a[],int cap, int *n, int x, int pos) {
    int i,idx=pos-1;
    if(cap==*n)
        cout<<"Array is full\n";
    for(i=*n-1;i>=idx;i--) {
        a[i+1]=a[i];
    }
    a[idx]=x;
    *n=*n+1;
}

void print(int a[],int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int arr[5],cap,size,x,pos;
    cap=sizeof(arr)/sizeof(arr[0]);
    size=3;
    x=7;
    pos=2;
    arr[0]=5; arr[1]=10; arr[2]=20;
    cout<<"Array before:\n";
    print(arr,size);
    insert(arr,cap,&size,x,pos);
    cout<<"Array after:\n";
    print(arr,size);
    return 0;
}