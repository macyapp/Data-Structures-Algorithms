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
    int i,j;
    int max=0,cur=0;
    for(i=0;i<n-1;i++) {      // Buy
        for(j=i+1;j<n;j++) {  // Sell
            if(a[j]>a[i]) {
                cur=a[j]-a[i];
            }
            max=(cur>max)?cur:max;
        }
    }
    cout<<"Max profit = "<<max<<"\n";
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