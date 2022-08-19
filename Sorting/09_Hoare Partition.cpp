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
    int piv=a[low];
    int i,j;
    i=low-1,j=high+1;
    while(true) {
        do {
            i++;
        } while(a[i]<piv);
        do {
            j--;
        } while(a[j]>piv);
        if(i>=j) {
            return j;
        }
        swap(a[i],a[j]);
    }
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