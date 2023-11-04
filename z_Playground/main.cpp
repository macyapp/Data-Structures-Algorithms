#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countA=0, countB=0;
    for(const auto& c: s) {
        if(c=='A') {
            countA++;
        }
        else if(c=='D') {
            countB++;
        }
    }
    if(countA==countB) {
        cout<<"Friendship\n";
    }
    else if(countA>countB) {
        cout<<"Anton\n";
    }
    else {
        cout<<"Danik\n";
    }
}

int main() {
    solve();
    return 0;
}