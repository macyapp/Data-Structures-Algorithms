#include<iostream>
using namespace std;

void initialize(int a[],int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

void insert(int a[],int& n,int cap,int key) {
    int i;
    if(n<cap) {
        for(;;) {
        }
    }
    else {
        throw("Array already full.\n");
    }
}

void solve() {
    int cap=6,n=6,key=42;
    int a[cap];
    // initialize(a,n);
    insert(a,n,cap,key);
}

int main() {
    solve();
    return 0;
}