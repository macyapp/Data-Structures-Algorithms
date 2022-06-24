#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void initialize(vector<int>& a) {
    int i,input;
    while(cin>>input)
        a.push_back(input);
}

void print(vector<int> a,int x,int y) {
    int i;
    for(i=x;i<y;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve(vector<int>& a, int n) {
    int i,x,y;

}

int main() {
    freopen("ip.txt","r",stdin);
    int n;
    vector<int> a;
    initialize(a);
    n=a.size();
    // solve(a,n);
    print(a,0,n);
    return 0;
}