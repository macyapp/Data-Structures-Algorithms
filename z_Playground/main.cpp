#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,i;
    cin>>n;
    unordered_map<int,int> ids;
    int tmp;
    int current_employees=0;
    for(i=0; i<n; i++) {
        cin>>tmp;
        if(ids[tmp]>0) {
            ids[tmp]--;
            current_employees--;
        }
        else {
            ids[tmp]++;
            current_employees++;
        }
    }
    cout<<current_employees<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}