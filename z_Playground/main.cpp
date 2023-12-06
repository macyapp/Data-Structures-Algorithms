#include<iostream>
using namespace std;

void initialize(int t[], int k) {
    int i;
    // The loop generates the no. of set bits for each index value
    t[0]=0;
    for(i=1; i<k; i++) {
        // This is a recursive generation using Brian Kernighan's Algorithm
        t[i]=t[i&(i-1)]+1;
    }
}

void solve() {
    int k=8;
    int n;
    int size=1<<k;
    int table[size];
    initialize(table,size);
    cin>>n;
    int count=0;
    while(n!=0) {
        count+=table[n&0xff];
        n>>=k;
    }
    cout<<count<<endl;
}

int main() {
    solve();
    return 0;
}