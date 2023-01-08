#include<iostream>
using namespace std;

bool setBit(int n, int k) {
    if((n>>(k-1))&1)
        return true;
    return false;
}

void solve() {
    int n,k;
    cin>>n>>k;
    cout<<boolalpha<<setBit(n,k)<<endl;
}

int main() {
    solve();
    return 0;
}