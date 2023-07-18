#include<bits/stdc++.h>
using namespace std;

void init(vector<vector<int>> &a, int k) {
    for(vector<int> &x: a) {
        cin>>x[0]>>x[1];
    }
}

void print(vector<vector<int>> &a, int k) {
    for(const vector<int> &x: a) {
        cout<<x[0]<<' '<<x[1];
        cout<<endl;
    }
    cout<<endl;
}

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    int x,y;
    vector<vector<int>> grid(k,vector<int>(2));
    init(grid,k);
    print(grid,k);
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}