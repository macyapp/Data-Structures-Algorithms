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

void solve(vi& a,int low,int mid,int high) {
    vi tmp(high-low+1);
    int i,j,k;
    i=low,j=mid+1,k=0;
    while(i<=mid || j<=high) {
        if(i>mid) {
            tmp[k++]=a[j++];
        }
        else if(j>high) {
            tmp[k++]=a[i++];
        }
        else if(a[i]<=a[j]) {
            tmp[k++]=a[i++];
        }
        else {
            tmp[k++]=a[j++];
        }
    }
    for(i=0;i<k;low++,i++) {
        a[low]=tmp[i];
    }
}

int main() {
    int n,low,mid,high;
    cin>>n>>low>>mid>>high;
    vi a;
    initialize(a,n);
    print(a,n);
    solve(a,low,mid,high);
    print(a,n);
    return 0;
}