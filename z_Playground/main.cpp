#include<iostream>
using namespace std;

bool isPrime(int n) {
    int i;
    for(i=2;i*i<=n;i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int x,y;
    cin>>x>>y;
    int count=0;
    int i=2;
    while(x<y) {
        if(x%i==0 && (i==x || i*i<=x)) {
            if(isPrime(i)) {
                x+=i;
                count++;
                i=2;
            }
            else {
                i++;
            }
        }
        else
            i++;
    }
    cout<<count<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}