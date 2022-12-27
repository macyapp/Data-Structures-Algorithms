#include<iostream>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {
    solve();
    return 0;
}