#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
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
    int i,j,start=0,end=0,s;
    int cur=0,max=a[0];
    for(i=0;i<n;i++) {
        if(cur<=0) {
            cur=a[i];
            s=i+1;
        }
        else {
            cur+=a[i];
        }
        if(cur>max) {
            max=cur;
            start=s;
            end=i;
        }
    }
    cout<<"Max Subarray Sum = "<<max<<"\n";
    cout<<"Subarray:\n";
    print(a,start,end);
}

int main() {
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,0,n);
    solve(a,n);
    return 0;
}