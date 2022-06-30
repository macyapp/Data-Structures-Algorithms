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
    int i,min,water=0;
    int l=0,r=n-1;
    int l_max=0,r_max=0;
    while(l<r) {
        if(a[l]<a[r]) {
            if(a[l]>=l_max) {
                l_max=a[l];
            }
            else {
                water+=l_max-a[l];
            }
            l++;
        }
        else {
            if(a[r]>=r_max) {
                r_max=a[r];
            }
            else {
                water+=r_max-a[r];
            }
            r--;
        }
    }
    cout<<"Total Trapped = "<<water<<"\n";
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