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

void solve(vector<int>& a, int n) {
    int i,j=0;
    for(i=1;i<n;i++) {
        if(a[i]!=a[j]) {
            j++;
            a[j]=a[i];
        }
    }
    print(a,j+1);
}

int main() {
    freopen("ip.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    solve(a,n);
    return 0;
}