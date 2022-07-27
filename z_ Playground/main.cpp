#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define endl "\n"

void initialize(vector<ll>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

void solve() {
    ll n;
    vector<ll> a(n,0);
    initialize(a,n);
    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("ip.txt","r",stdin);
    #endif
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}