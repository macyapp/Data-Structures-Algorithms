#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void initialize(vector<int>& a, int n) {
    int i,temp;
    for(i=0;i<n;i++) {
        cin>>temp;
        a.push_back(temp);
    }
}

void solve(vector<int>& a, int n) {

}

int main() {
    freopen("ip.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    solve(a,n);
    return 0;
}