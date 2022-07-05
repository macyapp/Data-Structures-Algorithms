#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;

void solve(int n) {
    ll b,c;
    if(n&1) {
        cout<<"-1\n";
    }
    else {
        n>>=1;
        b=1;
        c= n^b;
        cout<<b<<" "<<b<<" "<<c<<"\n";
    }
}

int main() {
    freopen("ip.txt","r",stdin);
    int t;
    cin>>t;
    ll n;
    while(t--) {
        cin>>n;
        solve(n);
    }
    return 0;
}