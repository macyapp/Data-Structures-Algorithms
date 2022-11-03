#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin>>a>>b;
    if(a==b||2*a<=b)
        cout<<"yes\n";
    else
        cout<<"no\n";
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}