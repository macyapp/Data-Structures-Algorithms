#include<iostream>
using namespace std;
typedef long long ll;

ll power(int x, int n) {
    if(n==0)
        return 1;
    return x*power(x,n-1);
}

int main() {
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<"\n";
    return 0;
}