#include<iostream>
using namespace std;
#define endl "\n"

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a+b,max(b+c,c+a))<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}