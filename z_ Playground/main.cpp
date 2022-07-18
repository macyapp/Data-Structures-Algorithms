#include<iostream>
#include<string>
using namespace std;

bool palindrome(string &s,int l,int r) {
    if(l>=r)
        return true;
    return ((s[l]==s[r]) && palindrome(s,l+1,r-1));
}

void solve(int n,string &s) {
    int i;
    bool flag=false;
    for(i=0;i<n;i++) {
        if(palindrome(s,0,n-1)) {
            flag=true;
            break;
        }
        swap(s[i],s[i+2]);
    }
    if(flag&&(!(n&1)))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("ip.txt","r",stdin);
    #endif
    int t,n;
    string s;
    cin>>t;
    while(t--) {
        cin>>n>>s;
        solve(n,s);
    }
    return 0;
}