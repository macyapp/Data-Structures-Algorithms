#include<iostream>
using namespace std;

void initialize(int a[],int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

int arrSum(int a[],int n) {
    int i,sum=0;
    for(i=0;i<n;i++) {
        sum+=a[i];
    }
    return sum;
}

void solve() {
    int n;
    cin>>n;
    int a[n];
    initialize(a,n);
    cout<<arrSum(a,n)<<endl;
}

int main() {
    solve();
    return 0;
}