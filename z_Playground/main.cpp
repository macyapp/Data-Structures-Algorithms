#include<iostream>
using namespace std;

void solve() {
    int n=5;
    int i,j;
    char c;
    for(i=1; i<=n; i++) {
        for(j=n; j>i; j--) {
            cout<<"  ";
        }
        for(j=1; j<=i; j++) {
            c='a'+j-1;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

int main() {
    solve();
    return 0;
}