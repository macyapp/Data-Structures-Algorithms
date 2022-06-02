#include<iostream>
using namespace std;
typedef long long ll;
#define mod 1000000007

ll power(int x, int n) {
    ll res=1;
    while(n){
        if(n&1) {
            res=((res%mod)+(x%mod))%mod;
        }
        x=((x%mod)*(x%mod))%mod;
        n>>=1;
    }
    return res;
}

int main() {
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<"\n";
    return 0;
}