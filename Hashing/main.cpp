#include<iostream>
#include<vector>
using namespace std;
#define pb push_back
#define endl "\n"

void initialize(vector<int>& a,int n) {
    int i,ip;
    for(i=0;i<n;i++) {
        cin>>ip;
        a.pb(ip);
    }
}

void print(vector<int> a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve() {
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("ip.txt","r",stdin);
    #endif
    int n,t;
    cin>>n;
    vector<int> a;
    return 0;
}