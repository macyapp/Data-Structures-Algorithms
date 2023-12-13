#include<iostream>
#include<vector>
using namespace std;

void initialize(vector<int> &a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

void print(vector<int> &a) {
    for(auto i: a) {
        cout<<i<<" ";
    }
    cout<<endl;
}

void solve(vector<int> &a,int n) {
    int i=0,cur=0;
    int count=0;
    while(i<n) {
        while(i<n && a[i]==a[cur]) {
            count++;
            i++;
        }
        cout<<a[cur]<<" "<<count<<endl;
        cur=i;
        count=0;
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    initialize(a,n);
    print(a);
    solve(a,n);
    return 0;
}