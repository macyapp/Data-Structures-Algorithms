#include<iostream>
using namespace std;

void solve(int n) {
    string s;
    cin>>s;
    int i,count=0;
    for(i=0;i<n;i++) {
        if((s[i]-'0')==1)
            count++;
    }
    if(count==n) {
        cout<<0<<"\n";
    }
    else {
        if(s[n-1]-'0'==0) {
            cout<<count<<"\n";
        }
        else {
            cout<<count-1<<"\n";
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("ip.txt","r",stdin);
    #endif
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        solve(n);
    }
    return 0;
}