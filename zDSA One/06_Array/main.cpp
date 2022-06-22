#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void initialize(vector<int>& a, int n) {
    int i,temp;
    for(i=0;i<n;i++) {
        cin>>temp;
        a.push_back(temp);
    }
}

void printArray(vector<int>& a,int x,int y) {
    int i;
    for(i=x;i<y;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    freopen("ip.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    printArray(a,0,n);
    return 0;
}