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

int calculate(vector<int>& a,int idx,int n) {
    int i,j;
    if(idx>=n)
        return 0;
    int maxProfit=0,profit,max;
    for(i=idx;i<n;i++) {
        max=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                profit=a[j]-a[i]+calculate(a,j+1,n);
            }
            max=(profit>max)?profit:max;
        }
        maxProfit=(max>maxProfit)?max:maxProfit;
    }
    return maxProfit;
}

void solve(vector<int>& a, int n) {
    cout<<"Max Profit = "<<calculate(a,0,n)<<"\n";
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