#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define all(X) (X).begin(), (X).end()
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    int dig=9;
    while(n) {
        while(n<dig)
            dig--;
        s+=char('0'+dig);
        n-=dig;
        dig--;
    }
    reverse(all(s));
    cout<<s<<endl;
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
