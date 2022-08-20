#include<iostream>
#include<vector>
using namespace std;

void initialize(vector<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

void print(vector<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve(vector<int>& a,int n,int x) {
    int i,j;
    int min_idx;
    for(i=0;i<x;i++) {
        min_idx=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[min_idx]) {
                min_idx=j;
            }
        }
        swap(a[i],a[min_idx]);
    }
}

int main() {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    initialize(a,n);
    solve(a,n,x);
    print(a,n);
    return 0;
}