#include<iostream>
using namespace std;
typedef long long ll;

ll power(int x, int n) {
    ll res=1;
    while(n) {
        if(n&1) {       // If n is odd
            res*=x;
        }
        x*=x;
        n>>=1;          // Dividing by 2
    }
    return res;
}

int main() {
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<'\n';
    return 0;
}