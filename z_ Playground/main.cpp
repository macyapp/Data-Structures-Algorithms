#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void initialize(vector<int>& a,int n) {
    int i,input;
    for(i=0;i<n;i++) {
        cin>>input;
        a.push_back(input);
    }
}

void print(vector<int> a,int x,int y) {
    int i;
    for(i=x;i<y;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve(vector<int>& a, int n) {
    int i;
    int l=0,r=n-1;
    int temp;
    i=0;
    while(i<=r) {
        if(a[i]==0) {
            swap(a[i],a[l]);
            i++;
            l++;
        }
        else if(a[i]==1) {
            i++;
        }
        else if(a[i]==2) {
            swap(a[i],a[r]);
            r--;
        }
    }
}

int main() {
    freopen("ip.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,0,n);
    solve(a,n);
    print(a,0,n);
    return 0;
}