#include<iostream>
using namespace std;

void solve() {
    int i,j;
    int n=8;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout<<(n*(j-1)+i-(j*(j-1)/2))<<' ';
        }
        cout<<endl;
    }
}

int main() {
    solve();
    return 0;
}