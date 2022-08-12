#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"
typedef long long ll;

void initialize(vector<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

void solve() {
    int n;
    cin>>n;
    vector<int> a(n-1);
    initialize(a,n-1);

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