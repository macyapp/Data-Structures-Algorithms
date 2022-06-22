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

void solve(vector<int>& a, int n) {
    int i;
    int m=0,count=0;
    int pass=0;
    for(i=0;i<n;i++) {
        if(count==0) {
            m=a[i];
            count++;
        }
        else if(a[i]==m) {
            count++; 
        }
        else {
            count--;
        }
    }
    count=0;
    for(i=0;i<n;i++) {
        if(a[i]==m) {
            count++; 
        }
    }
    if(count>n/2) {
        cout<<"Majority element: "<<m<<"\n";
    }
    else {
        cout<<"Majority element not found\n";
    }
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