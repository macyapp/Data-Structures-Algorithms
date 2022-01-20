#include<iostream>
using namespace std;

int linearsearch(int a[], int s, int x) {
    for(int i=0;i<s;i++) {
        if(a[i]==x)
            return i+1;
    }
    return -1;
}

void print(int a[],int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int arr[] = {20, 5, 7, 25}, x, i;
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<"\nEnter the element to be searched:\n";
    cin>>x;

    if(linearsearch(arr,size,x)==-1) {
        cout<<"Element not present.\n";
        return 0;
    }
    cout<<"Element is present at position: "<<linearsearch(arr,size,x)<<'\n';

    return 0;
}