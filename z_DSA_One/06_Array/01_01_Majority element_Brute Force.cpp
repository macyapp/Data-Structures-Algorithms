#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void initialize(vector<int>& a, int n) {
    int i;
    for(i=0;i<n;i++) {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
}

void solve(vector<int>& a, int n) {
    int i,j;
    int el=a[0],elc=0,count=0;
    for(i=0;i<n;i++) {
        count=0;
        for(j=0;j<n;j++) {
            if(a[j]==a[i]) {
                count++;
            }
            if(count>elc) {
                el=a[i];
                elc=count;
            }
        }
    }
    if(elc>=n/2) {
        cout<<"Majority element: "<<el
        <<"\nCount: "<<elc<<"\n";
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