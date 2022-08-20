#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"
#define v vector

void initialize(v<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

void print(v<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int solve(v<int>& a,int low,int high,int piv) {
    v<int> tmp(high-low+1);
    int pividx;
    int i,idx=0;
    for(i=low;i<=high;i++) {    // Smaller than pivot element
        if(a[i]<a[piv]) {
            tmp[idx++]=a[i];
        }
    }
    for(i=low;i<=high;i++) {    // Equal to pivot element
        if(a[i]==a[piv]) {
            tmp[idx++]=a[i];
        }
    }
    pividx=low+idx-1;           // Last index of pivot element
    for(i=low;i<=high;i++) {    // Equal to pivot element
        if(a[i]>a[piv]) {
            tmp[idx++]=a[i];
        }
    }
    for(i=0;i<idx;) {           // Equal to pivot element
        a[low++]=tmp[i++];
    }
    return pividx;
}

int main() {
    int n,p,idx;
    cin>>n>>p;
    v<int> a(n);
    initialize(a,n);
    print(a,n);
    idx=solve(a,0,n-1,p);
    print(a,n);
    cout<<idx<<endl;
    return 0;
}