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

void solve(vector<int>& a,int n,int t) {
    int l,r,m,idx;
    l=0,r=n-1;
    idx=-1;
    while(l<=r) {
        m=(l+r)/2;
        if(a[m]<t) {
            l=m+1;
        }
        else if(a[m]>t) {
            r=m-1;
        }
        else {
            idx=m;
            break;
        }
    }
    if(idx!=-1)
        cout<<"Element present at index: "<<idx<<endl;
    else
        cout<<"Element not present\n";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("ip.txt","r",stdin);
    #endif
    int n,t;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,n);
    cin>>t;
    solve(a,n,t);
    return 0;
}