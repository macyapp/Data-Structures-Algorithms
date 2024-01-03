#include<iostream>
#include<vector>
using namespace std;

void solve() {
    vector<int> a;
    int n;
    cin>>n;
    a.resize(n);
    auto initialize = [&](vector<int>& a) {
        for(auto& x: a) {
            cin>>x;
        }
    };
    initialize(a);
    int sum=0;
    for(const auto& x: a) {
        sum+=x;
    }
    cout<<sum<<endl;
}

int main() {
    solve();
    return 0;
}