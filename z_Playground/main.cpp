#include<iostream>
using namespace std;

void solve() {
    int num;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        num=i;
        for(int j=1; j<=i; j++) {
            cout<<num<<" ";
            num+=(n-j);
        }
        cout<<endl;
    }
}

int main() {
    solve();
    return 0;
}