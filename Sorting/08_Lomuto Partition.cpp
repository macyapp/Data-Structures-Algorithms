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

int solve(v<int>& a,int low,int high) {
    int piv=a[high];
    int i,j;
    i=low-1;
    for(j=low;j<high;j++) {
        if(a[j]<=piv) {
            i++;
            swap(a[j],a[i]);
        }
    }
    i++;
    swap(a[i],a[high]);
    return i;
}

int main() {
    int n,idx;
    cin>>n;
    v<int> a(n);
    initialize(a,n);
    print(a,n);
    idx=solve(a,0,n-1);
    print(a,n);
    cout<<idx<<endl;
    return 0;
}