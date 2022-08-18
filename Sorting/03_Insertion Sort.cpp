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

void print(vector<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve(vector<int>& a,int n) {
    int i,j;
    int tmp;
    for(i=0;i<n;i++) {
        tmp=a[i];
        for(j=i ; j>0 && a[j-1]>tmp ;j--) {
            a[j]=a[j-1];
        }
        a[j]=tmp;
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,n);
    solve(a,n);
    print(a,n);
    return 0;
}