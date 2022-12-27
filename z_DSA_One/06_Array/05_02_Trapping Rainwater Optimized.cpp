#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
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
    int i,min,water=0;
    vector<int> l(n,0),r(n,0);
    l[0]=a[0];
    r[n-1]=a[n-1];
    for(i=1;i<n;i++) {
        l[i]=(a[i]>l[i-1])?a[i]:l[i-1];
    }
    for(i=n-2;i>=0;i--) {
        r[i]=(a[i]>r[i+1])?a[i]:r[i+1];
    }
    for(i=0;i<n;i++) {
        min=(l[i]<r[i])?l[i]:r[i];
        water+=min-a[i];
    }
    cout<<"Total Trapped = "<<water<<"\n";
}

int main() {
    freopen("ip.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,0,n);
    solve(a,n);
    return 0;
}