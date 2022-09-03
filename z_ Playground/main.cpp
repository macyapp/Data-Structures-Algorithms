#include<iostream>
using namespace std;

void solve() {
    int n,x,s=0,r=0;
    cin>>n>>x;
    int max_rating=0;
    while(n--) {
        cin>>s>>r;
        if(r>max_rating && s<=x) {
            max_rating=r;
        }
    }
    cout<<max_rating<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}