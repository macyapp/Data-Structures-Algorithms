#include<iostream>
#include<vector>
using namespace std;
#define vi vector<int>

void initialize(vi& a,int n) {
    int i,input;
    for(i=0;i<n;i++) {
        cin>>input;
        a.push_back(input);
    }
}

void print(vi& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void merge(vi& a,int low,int mid,int high) {
    vi tmp(high-low+1);         // Temp array
    int i,j,k;
    i=low,j=mid+1,k=0;
    while(i<=mid || j<=high) {
        if(i>mid) {
            tmp[k++]=a[j++];
        }
        else if(j>high) {
            tmp[k++]=a[i++];
        }
        else if(a[i]<=a[j]) {   // "<=" is used to keep it stable
            tmp[k++]=a[i++];
        }
        else {
            tmp[k++]=a[j++];
        }
    }
    for(i=0;i<k;) {
        a[low++]=tmp[i++];
    }
}

void mergeSort(vi& a,int low,int high) {
    int mid;
    if(low<high) {
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void solve(vi& a,int n) {
    mergeSort(a,0,n-1);
}

int main() {
    int n;
    cin>>n;
    vi a;
    initialize(a,n);
    print(a,n);
    solve(a,n);
    print(a,n);
    return 0;
}