#include<iostream>
using namespace std;

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int findOdd(int a[], int n) {
    int i,res;
    res=0;
    for(i=0;i<n;i++) {
        res^=a[i];
    }
    return res;
}

int main() {
    int arr[]={4, 3, 4, 4, 4, 5, 5, 3, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array:\n";
    printarray(arr,size);
    cout<<"Element of odd occurence: "<<findOdd(arr,size)<<'\n';
    return 0;
}
