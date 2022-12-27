#include<iostream>
using namespace std;
typedef long long ll;

ll power(int x, int n) {
    if(n==0)
        return 1;
    if(n&1)             // If n is odd
        return x*power(x*x,n>>1);
    else
        return power(x*x,n>>1);
}

int main() {
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<'\n';
    return 0;
}