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
    int i;
    int profit=0;
    int maxProfit=0;
    int min=a[0];
    for(i=1;i<n;i++) {
        min=(a[i]<min)?a[i]:min;
        profit=a[i]-min;
        maxProfit=(profit>maxProfit)?profit:maxProfit;
    }
    cout<<"Max Profit = "<<maxProfit<<"\n";
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