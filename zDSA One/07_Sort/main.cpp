#include<iostream>
#include<vector>
using namespace std;

void initialize(vector<int>& a,int n) {
    int i,input;
    for(i=0;i<n;i++) {
        cin>>input;
        a.push_back(input);
    }
}

void print(vector<int> a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve(vector<int>& a,vector<int>& b,int m,int n) {
    int i=0,j=0;
    while(i<m || j<n) {
        if(i>=m) {
            cout<<b[j++]<<" ";
        }
        else if(j>=n) {
            cout<<a[i++]<<" ";
        }
        else if(a[i]<b[j]) {
            cout<<a[i++]<<" ";
        }
        else {
            cout<<b[j++]<<" ";
        }
    }
}

int main() {
    freopen("ip.txt","r",stdin);
    int m,n;
    vector<int> a;
    vector<int> b;
    cin>>m;
    initialize(a,m);
    print(a,m);
    cin>>n;
    initialize(b,n);
    print(b,n);
    solve(a,b,m,n);
    return 0;
}