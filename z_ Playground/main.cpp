#include<iostream>
using namespace std;

void solve(int x,int y,int n,int r) {
    int a,b,a_max,b_max;
    bool flag=true;
    for(b=0,a=n;b<=n;b++,a--) {
        if(a*x+b*y==r) {
            a_max=a;
            b_max=b;
        }
    }
    if(a_max>=0 && a_max<=n && b_max>=0 && b_max<=n) {
        cout<<a_max<<" "<<b_max<<"\n";
    }
    else {
        cout<<"-1\n";
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("ip.txt","r",stdin);
    #endif
    int t,x,y,n,r;
    cin>>t;
    while(t--) {
        cin>>x>>y>>n>>r;
        solve(x,y,n,r);
    }
    return 0;
}